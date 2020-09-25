[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# SPI Driver asynchronous - Self loopback multi client

This example demonstrates how to use the SPI driver in asynchronous mode to achieve self-loop back between multiple clients.

## Description

#NAME?

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_pic32cx_bz24_bz25) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/driver/spi/async/spi_self_loopback_multi_client/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
|wbz451_curiosity.X| MPLABX project for [PIC32CX WBZ451 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
|wbz451_curiosity.X|[PIC32CX WBZ451 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|


### Setting up [PIC32CX WBZ451 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)
- Use jumper wire to connect "SDO" to "SDI" pins on the Mikrobus socket of the curiosity board
- Connect the Debug USB port on the board to the computer using a micro USB cable


## Running the Application

1. Build and program the application using its IDE
2. LED is turned ON on Success

Refer below table for LED name

| Board | LED Name |
|-----|-----|
|[PIC32CX WBZ451 Curiosity Board](https://www.microchip.com/developmenttools/ProductDetails/)|Green LED|

