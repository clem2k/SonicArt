# SonicArt
Epoxy Resin and Arduino Sonic The hedgehog art project.

> Documentation is a Work In Progress, project is not done yet.
>

This project is a piece of art combining epoxy resin, some Arduino based electronics and my passion for SEGA Genesis and Sonic the Hedgehog. I've been inspired by the [Nerd Forge](https://thenerdforge.com/) and Martina's epoxy resin paintings (you can see a video [here](https://youtu.be/glsRHkLHvXs)). The goal is to obtain a kind of 3D effect with multiple layers of resin. As I'm not so good in painting, "i totally suck"  would be more accurate, I've decided to print and cut the different layers. If you've got a CNC cutter, or laser you can precisely cut the layers, i did it with my Brother Scan and cut (and included the files).

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
- something to cut the prints (i used a Brother "Scan'n Cut" and scissors)
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

In order to have a good "3D" effect, you'll need to cut the different prints. If you have a scan'n cut from brother, i've included the files in Layers/cuts

![](https://github.com/clem2k/SonicArt/blob/e6488f15572ae39d30e79057ce608120c8648cc1/Layers/cuts/screenshot.png)

## Epoxy Resin work

> Please refer to tutorials about epoxy resin, do not try epoxy resin if you don't know how to do it safely. Epoxy resin is hazardous material so please be careful and follow your resin manufacturer instructions.

Here's the consuming time part ... In your mold you'll need to build a first clear epoxy resin layer. Build it so it's about 5 to 7mm in height. Let it cure for about 1 day (and follow the instructions of your resin manufacturer, if it says more than 24h, then make it so ...). 

When it's cured, you'll need the first background layer and some paper glue. Place a thin glue layer on the back of the background layer then place it on the cured resin. Pour a new layer of resin, thinner this time, about 3 to 5mm and let it cure (about 24 hours or as said in your instructions again).

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0227.JPG)

![](https://github.com/clem2k/SonicArt/blob/411a8186de10a1695e0643ae4622889aac4b7d9d/Pictures/IMG_20210907_125050.jpg)

Do it again for each layer, till the final layer. For the final layer make it a bit thicker, just as the first one ...

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0236.JPG)

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0237.JPG)

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0249.JPG)

## Electronic Work

### Preparation work

#### The led strips

When your resin art is ready, you can determine how many led you'll need. With the 2 strips i've got i needed 45 leds, so i cut the two strips to length and fixed them with electrical tape led facing the resin. 

![](https://github.com/clem2k/SonicArt/blob/9a8291af0378e674c8eff3c7a93f53738c848c58/Pictures/DSC_0259.JPG)

#### The Buttons 

You'll need to prep the frame and cut some holes for the buttons in the frame, you'll need 2 for the sound and led buttons, and another for the on/off switch.

### PCB

I've designed a PCB, but it's totally optional you can solder directly the components and hot glue them in the frame, I just wanted to make it nice inside also ;-) If you want you can download my Gerber files and use them to make the PCB yourself or to order it from any PCB prototyping service (such as JLCPCB or PCBway). Link to gerber file [here](https://github.com/clem2k/SonicArt/blob/5eb46e809447564e8ae2b53ef5e433ecfa21d3dd/PCB/Gerber_PCB_SonicDuino_2_2021-09-18.zip).

##### Here's the schematics

![](https://github.com/clem2k/SonicArt/blob/e133f82bf38153d22ceef6026d7bcf80012214cb/PCB/Schematic_SonicDuino_2021-09-18.png)

##### And the PCB layout

![schematics](https://github.com/clem2k/SonicArt/blob/e133f82bf38153d22ceef6026d7bcf80012214cb/PCB/PCB_PCB_SonicDuino_2_2021-09-18.png)

## Assembly

When all is ready you'll need to assemble the resin in the frame (and maybe cut some bezel with black 180g/m² paper), I used hot glue to fix the pcb, the resin and buttons to the frame.

## Final thoughts

It's just a DIY project and many things could be better, do not hesitate to reach to me via github or twitter ( [@clem2k](https://twitter.com/clem2k) ) if you have some tips or questions.

