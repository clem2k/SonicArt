// LEDS
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN         4
#define NUMPIXELS   24 // Change here if you don't have the same LED number
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL    500

// BTN
#define BTN1        6
#define BTN2        7
int button1State = 0;
int button2State = 0;

// MP3
#include <SoftwareSerial.h>
#include <DFMiniMp3.h>


class Mp3Notify
{
  public:
    static void PrintlnSourceAction(DfMp3_PlaySources source, const char* action)
    {
      if (source & DfMp3_PlaySources_Sd)
      {
        Serial.print("SD Card, ");
      }
      if (source & DfMp3_PlaySources_Usb)
      {
        Serial.print("USB Disk, ");
      }
      if (source & DfMp3_PlaySources_Flash)
      {
        Serial.print("Flash, ");
      }
      Serial.println(action);
    }
    static void OnError(uint16_t errorCode)
    {
      // see DfMp3_Error for code meaning
      Serial.println();
      Serial.print("Com Error ");
      Serial.println(errorCode);
    }
    static void OnPlayFinished(DfMp3_PlaySources source, uint16_t track)
    {
      Serial.print("Play finished for #");
      Serial.println(track);
    }
    static void OnPlaySourceOnline(DfMp3_PlaySources source)
    {
      PrintlnSourceAction(source, "online");
    }
    static void OnPlaySourceInserted(DfMp3_PlaySources source)
    {
      PrintlnSourceAction(source, "inserted");
    }
    static void OnPlaySourceRemoved(DfMp3_PlaySources source)
    {
      PrintlnSourceAction(source, "removed");
    }
};

SoftwareSerial secondarySerial(10, 11); // RX, TX
DFMiniMp3<SoftwareSerial, Mp3Notify> mp3(secondarySerial);

void setup()
{
  // MP3
  mp3.begin();
  uint16_t volume = mp3.getVolume();
  mp3.setVolume(12);
  uint16_t count = mp3.getTotalTrackCount(DfMp3_PlaySource_Sd);

  // LEDS
  pixels.begin();

  // BUTTONS
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);

  // INIT sound : SEGA
  playFile(1);

}

void waitMilliseconds(uint16_t msWait)
{
  uint32_t start = millis();

  while ((millis() - start) < msWait)
  {
    mp3.loop();
    delay(1);
  }
}

void playFile(uint16_t id) {
  if (id != 0) {
    mp3.playMp3FolderTrack(id);
    waitMilliseconds(3000);
  }

}

void ledAnim01() {
  pixels.clear();
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.clear(); // to reset previous leds
    pixels.setPixelColor(getLedPosition(i), pixels.Color(0, 0, 255));
    pixels.show();
    delay(DELAYVAL / 5);
  }
  pixels.clear();
  pixels.show();
}
void ledAnim02() {
  pixels.clear();
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(getLedPosition(i), pixels.Color(0, 0, 255));
    pixels.show();
    delay(DELAYVAL / 2);
  }
  pixels.clear();
  pixels.show();
}

void ledAnim03(int wait) {
  for (long firstPixelHue = 0; firstPixelHue < 5 * 65536; firstPixelHue += 256) {
    for (int i = 0; i < pixels.numPixels(); i++) { // For each pixel in strip...
      int pixelHue = firstPixelHue + (i * 65536L / pixels.numPixels());
      pixels.setPixelColor(getLedPosition(i), pixels.gamma32(pixels.ColorHSV(pixelHue)));
    }
    pixels.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment

  }
  pixels.clear();
  pixels.show();
}

int getRnd() {
  return random(1, 4);
}


void ledAnim(int id) {
  if (id == 1) {
    ledAnim01();
  }
  if (id == 2) {
    ledAnim02();
  }
  if (id == 3) {
    ledAnim03(10);
  }
}

int getLedPosition(int position){
  int newStart = 12;
  int newPosition = 0;
  position += 1;
  // 1 => 13 , 12 => 24 , 13 => 1
  if(position <= newStart){ newPosition = position + newStart - 1;}
  if(position >  newStart){ newPosition = position - newStart - 1;}
  

  return newPosition;
}


void loop()
{

  // Get random
  int rndLed = getRnd();
  int rndSnd = getRnd();


  // BUTTONS
  button1State = digitalRead(BTN1);
  button2State = digitalRead(BTN2);
  if (button1State == LOW) {
    playFile(rndSnd);
  }
  if (button2State == LOW) {
    ledAnim(rndLed);
  }

}
