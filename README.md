# ESP_OS v1.1 💻🖱️
The OS for ESP32 with simple GUI with own command language.
## 📌 Important notice ! :
 - Hi there, you have come to the latest version(2021) version of the ESP_OS! 
 - It is the newest version now which supports bluetooth and its own simple command language
## 📥 How to Download:
- You can use my project and download it as a ZIP file  or just directly [Click here](https://github.com/HarishAathiyan/ESP_OS/archive/refs/heads/V1.1.zip) to download all the files.
## 🔨 how to use ?:
> STEP 1:
   - first of all you need dow have a downloaded version od the Arduino IDE
> STEP 2:   
   - Then you need to download the MIT keyboard app.
> STEP 3:
   - open the `esposv1.1.ino` file by extacting the zip file and going into the `esposv1.1` folder
> STEP 4:

  - _select the mode of the **OS** by defining one of the **modes**:_ 

 Here is for the desktop mode:

  `#define DESKTOP_MODE`

And here is for the simple mode:

`#define SIMPLE_MODE`
> STEP 5:

- before uploading the sketch, you need to setup the schematics first!

**Down below is an oversimplified shematic:**
![](https://user-images.githubusercontent.com/75715998/117460744-763c7580-af6a-11eb-9136-ce65acc9a56d.png)

- The components needed are:
   - ESP32
   - HC05
   - OLED Monochrome 128x64

 > STEP 6:
 - hit the upload button on the top left and there you go!

## Features and its usage:
> Features List of the ESPOS v1.1 comparing simple and Desktop Mode :

|***Features***|***simple Mode***|***desktop Mode***|
|---|---|---|
|**Bluetooth**|❌|✔|
|**IR Support**|✔|✔|
|**RGI graphics**|✔|❌|
|**Calculator**|✔|❌|
|**ESPcraft**|✔|❌|
|**WindowsScreen**|❌|✔|
|**MIT KeyBoard**|❌|✔|
|**Mouse cursor**|❌|✔|
|**Least power use**|✔|❌|
|**VoltMeter**|✔|❌|
|**ESPcommand**|❌|✔|
|**Simplicity**|✔|❌|
|**PAINT software**|✔|❌|
|**OnScreen Keyboard**|✔|❌|
|**OffScreen KeyBoard**|❌|✔|

> **📱Bluetooth Support:**


  The **ESPOS** comes with a  _**bluetooth**_ support that you can control the OS with your mobile, _**bluetooth keyboard**_ or any other `Bluetooth` Device.
   > How to download the app:
     - go to the amazon app store and search for ESPOS and the first one will be the the app to download.
     -  Or in shortcut, you can [Click here](https://www.amazon.com/dp/B095CN488K/ref=sr_1_1?dchild=1&keywords=espos&qid=1621490488&sr=8-1) to get to the download page

  **The Bluetooth apps supported:**
   - UNICA robotics bluetooth joystick.
   - MIT app inventor keyBoard App.

> **🔦IR Support:**

  The **ESPOS** supports Various IR remote and can be easily Modified.

  **The IR remotes supported:**
  - LG37
  - Radio (OR) music player IR remote
  
 > **RGI graphics:**

  The **ESPOS** comes with its own simple graphics engine called **RGI graphics**. 

  **The RGI graphics can do:**

  - Render Simple 3D objects.
  - Draw various Shapes.

> **Calculator:**

The **ESPOS** comes with the _simplest_ **calculator** on the Earth.

**The calculator can do functions like:**
 - Addition
 - subraction
 - Multiplication
 - division
 - Power

>**ESPcraft:**

The **ESPOS** comes with simple **Open world game** not that much **interest to play**.

>**Windows Screen**

The **ESPOS** comes with the true **Windows 10 OS** like window properties(only in the desktop mode)

**The Windows screen can do:**
- Maximize
- Minimize
- Close

>**MIT KeyBoard:**

The **ESPOS** comes with a MIt KeyBoard app Support that can write move the cursor etc(only for the deskto mode).

**The MIT KeyBoard can do:**
- Need  bluetooth connection to work first.
- Write Alphabets from A-z
- Clear and space
- Move cursor
- Left and Right Clicks
- Connect and disconnect
- Write Numbers
- And Much More

> **Mouse cursor:**

The **ESPOS** comes with a dum looking Mouse cursor That can be used to loacate.

> **VoltMeter:**

The **ESPOS** comes with a voltmeter that can measure the magnitude of a potential in a circuit.

> **ESPcommand:**

The **ESPOS** comes with a integerated command line to execute the commands.

**The command list**
- GPIO NUM ON/OFF

> **PAINT software:**

The **ESPOS** comes with a paint software simply to paint something idiotic.

