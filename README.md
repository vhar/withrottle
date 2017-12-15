What's withrottle?
-------------------
This is truncated JMRI WiThrottle server implementation for DCC++ command station based on ESPDuino (ESP-13) shield

Adding support of ESP8266 board to Arduino IDE
----------------------------------------------
* Start Arduino and open Preferences window.
* Enter http://arduino.esp8266.com/stable/package_esp8266com_index.json in to Additional Board Manager URLs field. You can add multiple URLs, separating them with commas.
* Open Boards Manager from Tools > Board menu and find esp8266 platform.
* Select the version you need from a drop-down box.
* Click install button.

Sketch uploading
----------------
* Connect USB to UART converter to ESP13 UART connector.
* Don't forget swith it to 3.3 voltage level
* Connect pin D0 of ESP13 side connector to Ground.
* Connect USB to UART converter to PC.
* Select ESPDuino (ESP-13 Module) form Tools > Board menu.
* Select USB port from Tools > Port menu.
* Click upload button or select Upload from Sketch menu.

Board installation
------------------
* Disconnect USB to UART converter from ESP board.
* Remove jumper wire between D0 and Ground pins.
* Switch SW1 to ON.
* Remove jumper wires from Motor Shield board.
* Install ESP board atop of Motor Shield board.
* Connect jumper wires to Arduino side connector between D5 and D13 pins, and between D10 and D12 pins if you use Arduino UNO DCC++, or between D2 and D13 pins for Arduino MEGA DCC++.

How to use
----------
* Turn power ON on DCC++.
* Open WiFi settings on mobile device.
* Find and connect to «withrottle» network.
* Start Engine Driver or WiThrottle app on mobile device
* On Engine Driver select ESPWTServer on Discovered Servers
* On WiThrottle app go to Settings page, select «Server Configuration», and turn on «Use automatic network configuration». Restart WiThrottle app.
* Enjoy!

Links
-----
DCC++ https://github.com/DccPlusPlus<br />
ESP8266 Core https://github.com/esp8266/Arduino<br />
JMRI WiFi Throttle Communications Protocol http://jmri.sourceforge.net/help/en/package/jmri/jmrit/withrottle/Protocol.shtml<br />
WiThrottle official site http://www.withrottle.com/WiThrottle/Home.html<br />
Download WiThrottle on the AppStore https://itunes.apple.com/us/app/withrottle-lite/id344190130<br />
Engine Driver official site https://enginedriver.mstevetodd.com/<br /><br />
Download Engine Driver on the GooglePlay https://play.google.com/store/apps/details?id=jmri.enginedriver<br />
