# SonicArt
Epoxy Resin and Arduino Sonic The hedgehog art project.

Documentation is a Work In Progress, project is not done yet.

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sodales massa sed est ultrices, eget sollicitudin diam iaculis. Aliquam ut lacus vitae leo elementum tristique. Suspendisse nulla augue, aliquam et ligula quis, gravida pharetra est. Integer ac facilisis diam, at dignissim diam. Curabitur sit amet ex velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse potenti. Proin at mattis augue.


## List of Materials 

### Main components

You can obviously change any of the part with some less expensive or more available, please note the dimensions of the mold : the base of the mould is 18cm x 18cm, and all the graphics I've put together are also 18x18. If you change the mold and have different sizes, do not forget to update the graphics files. If you choose something smaller than 18x18, be advised that cutting will be very tricky as the small parts (such as rings and lives indicator) are really small.

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

In order to have a good "3D" effect, you'll need to cut the different prints. If you have a scan'n cut from brother, i've included the files in Layers/cuts

![](https://github.com/clem2k/SonicArt/blob/e6488f15572ae39d30e79057ce608120c8648cc1/Layers/cuts/screenshot.png)

## Epoxy Resin work

> Please refer to tutorials about epoxy resin, do not try epoxy resin if you don't know how to do it safely. Epoxy resin is hazardous material so please be careful and follow your resin manufacturer instructions.

Here's the consuming time part ... In your mold you'll need to build a first clear epoxy resin layer. Build it so it's about 5 to 7mm in height. Let it cure for about 1 day (and follow the instructions of your resin manufacturer, if it says more than 24h, then make it so ...). 

When it's cured, you'll need the first background layer and some paper glue. Place a thin glue layer on the back of the background layer then place it on the cured resin. Pour a new layer of resin, thinner this time, about 3 to 5mm and let it cure (about 24 hours or as said in your instructions again).

![](https://github.com/clem2k/SonicArt/blob/411a8186de10a1695e0643ae4622889aac4b7d9d/Pictures/IMG_20210907_125050.jpg)

Do it again for each layer, till the final layer. For the final layer make it a bit thicker, just as the first one ...

## Electronic Work

### Preparation work

#### The led strips

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sodales massa sed est ultrices, eget sollicitudin diam iaculis. Aliquam ut lacus vitae leo elementum tristique. Suspendisse nulla augue, aliquam et ligula quis, gravida pharetra est. Integer ac facilisis diam, at dignissim diam. Curabitur sit amet ex velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse potenti. Proin at mattis augue.

#### The Buttons 

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sodales massa sed est ultrices, eget sollicitudin diam iaculis. Aliquam ut lacus vitae leo elementum tristique. Suspendisse nulla augue, aliquam et ligula quis, gravida pharetra est. Integer ac facilisis diam, at dignissim diam. Curabitur sit amet ex velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse potenti. Proin at mattis augue.

### PCB

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sodales massa sed est ultrices, eget sollicitudin diam iaculis. Aliquam ut lacus vitae leo elementum tristique. Suspendisse nulla augue, aliquam et ligula quis, gravida pharetra est. Integer ac facilisis diam, at dignissim diam. Curabitur sit amet ex velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse potenti. Proin at mattis augue.

Here's the schematics

![](https://github.com/clem2k/SonicArt/blob/e133f82bf38153d22ceef6026d7bcf80012214cb/PCB/Schematic_SonicDuino_2021-09-18.png)

And the PCB layout

![schematics](https://github.com/clem2k/SonicArt/blob/e133f82bf38153d22ceef6026d7bcf80012214cb/PCB/PCB_PCB_SonicDuino_2_2021-09-18.png)

## Assembly

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sodales massa sed est ultrices, eget sollicitudin diam iaculis. Aliquam ut lacus vitae leo elementum tristique. Suspendisse nulla augue, aliquam et ligula quis, gravida pharetra est. Integer ac facilisis diam, at dignissim diam. Curabitur sit amet ex velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse potenti. Proin at mattis augue.

## Final thoughts

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sodales massa sed est ultrices, eget sollicitudin diam iaculis. Aliquam ut lacus vitae leo elementum tristique. Suspendisse nulla augue, aliquam et ligula quis, gravida pharetra est. Integer ac facilisis diam, at dignissim diam. Curabitur sit amet ex velit. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Suspendisse potenti. Proin at mattis augue.
