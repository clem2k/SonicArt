# SonicArt
Epoxy Resin and Arduino Sonic The hedgehog art project.

This project is a piece of art combining epoxy resin, some Arduino based electronics and my passion for SEGA Genesis and Sonic the Hedgehog. I've been inspired by the [Nerd Forge](https://thenerdforge.com/) and Martina's epoxy resin paintings (you can see a video [here](https://youtu.be/glsRHkLHvXs)). The goal is to obtain a kind of 3D effect with multiple layers of resin. As I'm not so good in painting, "I totally suck"  would be more accurate, I've decided to print and cut the different layers. If you've got a CNC cutter, or laser you can precisely cut the layers, I did it with my Brother Scan and cut (and included the files).

You can change the artworks and sounds, and use the Arduino code. The code will work and the Gerber file will be the same no matter what you decide to use as graphics and sounds.


## List of Materials 

### Main components

You can obviously change any of the part with some less expensive or more available, please note the dimensions of the mold : the base of the mold is 18cm x 18cm, and all the graphics I've put together are also 18x18. If you change the mold and have different sizes, do not forget to update the graphics files. If you choose something smaller than 18x18, be advised that cutting will be very tricky as the small parts (such as rings and lives indicator) are really small.

| Quantity | Description                                         | Buy link                                     |
| -------- | --------------------------------------------------- | -------------------------------------------- |
| 1        | Silicon mold                                        | https://www.amazon.fr/gp/product/B08PP3CKRZ/ |
| 1        | MP3 DFplayer                                        | https://www.amazon.fr/gp/product/B07X2CZZDJ/ |
| 1        | Individually addressable LED Strip                  | https://www.amazon.fr/gp/product/B08GRG7S97/ |
| 1        | Wood and glass Photo Frame                          | https://www.amazon.fr/gp/product/B07BKY4CNX/ |
| 1        | 9V Battery holder                                   | https://www.amazon.fr/gp/product/B005AAQTXC/ |
| 2        | 1k resistor                                         |                                              |
| 1        | Arduino Nano                                        |                                              |
| 2        | Push button                                         |                                              |
| 1        | On/Off switch                                       |                                              |
| 1        | Micro SD Card (the min size available, i use a 1Gb) |                                              |
| 5        | 180gr/m² paper  sheets                              |                                              |

### You'll also need 

- a printer
- a soldering iron (and solder, third hand, ...)
- something to cut the prints (I used a Brother "Scan'n Cut" and scissors)
- Some paper glue
- Epoxy Resin (I used about 800 grams), protections gloves, some mask, and usual stuff when dealing with epoxy resin (try and ask google for epoxy resin works and safety tips : DO NOT USE EPOXY RESIN if you don't know how to be safe with that kind of products, it's hazardous material : SAFETY FIRST !)

## Print work

All the files are designed to be 18cm by 18cm, the same as the base of my silicon mold, if you'd like to use another mold do not forget to change the size of each art file. In order to have a kind of 3D effect we need to have different layers.

The real background image is Ciel2.jpg, it must be your first layer

![](https://github.com/clem2k/SonicArt/blob/8a44ed843cbbd3b109aedd5d82b67ce09dd609e7/Layers/arts/Ciel2.jpg)

Then comes the mountains in the background Decor1.jpg

![](https://github.com/clem2k/SonicArt/blob/8a44ed843cbbd3b109aedd5d82b67ce09dd609e7/Layers/arts/Decor1.jpg)

Then you'll need Decor2.jpg

![](https://github.com/clem2k/SonicArt/blob/8a44ed843cbbd3b109aedd5d82b67ce09dd609e7/Layers/arts/Decor2.jpg)

Decor3.jpg is the most foreground layer

![](https://github.com/clem2k/SonicArt/blob/main/Layers/arts/Decor3.jpg)

For the remaining files (Access1.jpg, Access2.jpg, Rings.jpg, Sonic.jpg) you can just print and cut them, it's the final foreground layer.

## Cut Work

You need to cut all the prints, use whatever you're comfortable with ...

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0230.JPG)

In order to have a good "3D" effect, you'll need to cut the different prints. If you have a scan'n cut from brother, I've included the files in Layers/cuts folder.

![](https://github.com/clem2k/SonicArt/blob/e6488f15572ae39d30e79057ce608120c8648cc1/Layers/cuts/screenshot.png)

## Epoxy Resin work

> Please refer to tutorials about epoxy resin, do not try epoxy resin if you don't know how to do it safely. Epoxy resin is hazardous material so please be careful and follow your resin manufacturer instructions.

Here's the consuming time part ... In your mold you'll need to build a first clear epoxy resin layer. Build it so it's about 5 to 7mm in height. Let it cure for about 1 day (and follow the instructions of your resin manufacturer, if it says more than 24h, then make it so ...). 

When it's cured, you'll need the first background layer and some paper glue. Place a thin glue layer on the back of the background layer then place it on the cured resin. Pour a new layer of resin, thinner this time, about 3 to 5mm and let it cure (about 24 hours or as said in your instructions again).

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0227.JPG)

Do it again for each layer, till the final layer. For the final layer make it a bit thicker, just as the first one ...

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0236.JPG)

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0237.JPG)

![](https://github.com/clem2k/SonicArt/blob/411a8186de10a1695e0643ae4622889aac4b7d9d/Pictures/IMG_20210907_125050.jpg)

## Electronic Work

### Preparation work

#### The led strips

When your resin art is ready, you can determine how many led you'll need. With the 2 strips i've got i needed 45 leds, so i cut the two strips to length and fixed them with electrical tape led facing the resin. ***WIP : I'm waiting for another led strip as I messed up the first one when fixing it to the resin ... -_-***

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0259.JPG)

#### The Buttons 

You'll need to prep the frame and cut some holes for the buttons in the frame, you'll need 2 for the sound and led buttons, and another for the on/off switch.

#### Battery holder

The battery holder goes to power on the PCB or directly to the Arduino nano to pins VIN ( + ) and GND ( - ). Do not forget to add a on/off switch button to the red wire of the battery holder, otherwise it'll be always powered up ...

### PCB

I've designed a PCB, but it's totally optional you can solder directly the components and hot glue them in the frame, I just wanted to make it nice inside also ;-) If you want you can download my Gerber files and use them to make the PCB yourself or to order it from any PCB prototyping service (such as JLCPCB or PCBway). Link to Gerber file [here](https://github.com/clem2k/SonicArt/blob/5eb46e809447564e8ae2b53ef5e433ecfa21d3dd/PCB/Gerber_PCB_SonicDuino_2_2021-09-18.zip).

##### Here's the schematics

![](https://github.com/clem2k/SonicArt/blob/e133f82bf38153d22ceef6026d7bcf80012214cb/PCB/Schematic_SonicDuino_2021-09-18.png)

##### And the PCB layout

![schematics](https://github.com/clem2k/SonicArt/blob/e133f82bf38153d22ceef6026d7bcf80012214cb/PCB/PCB_PCB_SonicDuino_2_2021-09-18.png)

## Arduino code

### Define your  libraries, pins and variables

The important here is 45 : this is the number of led you've got on your led strip(s). In my case I've got 45 leds. I've used PIN4 for the leds, and pins 6 and 7 for my buttons, later in the code you'll find pins 10 and 11 for the serial MP3 player.

```c++
// LEDS
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN         2
#define NUMPIXELS   45 // Change here if you don't have the same LED number
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL    500

// BTN
#define BTN1        4
#define BTN2        5
int button1State = 0;
int button2State = 0;

// MP3
#include <SoftwareSerial.h>
#include <DFMiniMp3.h>

```
### Setup

In this part of the code we need to setup the libraries and button listening. The button are defined as INPUT_PULLUP as I didn't use any resistors, the volume is set to "12" : not to loud, not to low, and at the end of the init sequence the code will play the iconic "SEGA" sound from the Sonic cartridge.

```c++
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

```
### Sound player

Just a little method that will play any file by id. If id is 1 then the file /mp3/0001.mp3 from the DFPlayer will be played. Id in my cas can be 1, 2 or 3, as I have only 3 MP3 sound files. Just after I added a 3 seconds delay in order not to play another file again, you can adjust the delay in ms by changing the 3000 value.

```c++
void playFile(uint16_t id) {
  if (id != 0) {
    mp3.playMp3FolderTrack(id);
    waitMilliseconds(3000);
  }
}
```
### Led animations

The first method will display each led with BLUE at maximum brightness then move to the next after switching off the previous led. The animation is quite fast on this one.

The second one will light every led one after another, keeping the previous one on, with BLUE at maximum brightness (and yes again BLUE, it's sonic after all). 

You can change the color and brightness by adjusting the (0 , 0 , 255) values : first value is GREEN, then RED, then BLUE, and you can go from 0 to 255 to set brightness.

The last animation method is a "rainbow", it's an adaptation from the sample file from ADAFRUIT NEOPIXEL.

```c++
void ledAnim01() {
  pixels.clear();
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.clear(); // to reset previous leds
    pixels.setPixelColor(i, pixels.Color(0, 0, 255));
    pixels.show();
    delay(DELAYVAL / 5);
  }
  pixels.clear();
  pixels.show();
}
void ledAnim02() {
  pixels.clear();
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 0, 255));
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
      pixels.setPixelColor(i, pixels.gamma32(pixels.ColorHSV(pixelHue)));
    }
    pixels.show(); // Update strip with new contents
    delay(wait);  // Pause for a moment

  }
  pixels.clear();
  pixels.show();
}


```



### The main code

The main code will generate 2 random integers (possible values 1, 2 or 3). Then it'll wait for a button to be pushed. If button1 is pushed then the code will play one of the 3 MP3 files, if button2 is pushed then it will trigger one of the 3 led animations.

```c++
int getRnd() {
  return random(1, 4);
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
```

## Assembly

When all is ready you'll need to assemble the resin in the frame (and maybe cut some bezel with black 180g/m² paper), I used hot glue to fix the PCB, the resin and buttons to the frame.

## Final thoughts and tips

**DO NOT USE HOT GLUE TO ATTACH THE LEDS** : I've messed a lot of the tiny resistors when I tried to hot glue the strips to the resins, I tried to fix it and reattach the strips with electrical tape instead but the damage was too big, so I did need to order another led strip ... MAKE/FAIL/MAKE/FAIL ... as Evan & Katelyn always say ;-) 

It's just a DIY project and many things could be better, do not hesitate to reach to me via github or twitter ( [@clem2k](https://twitter.com/clem2k) ) if you have some tips or questions.

I'll probably refactor, update the code to have another version cleaner, and I also plan to have another led animation that matches the colors of my design (I want another one that matches the pictures as a Philips Ambilight on TV) so follow the repo if you're interested ;-)

