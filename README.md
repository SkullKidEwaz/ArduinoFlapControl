# ArduinoFlapControl
Control your Exhaust Flaps with an Arduino Nano, an RF Receiver and a Remote.<br />
This is only tested with VAG PWM Flaps.
<br />A Circuit will soon be created, so you know how to wire everything up!!!!!
<br /><br /><br />
I used a 4 Channel RF Receiver(cheap one from Amazon), but only used 2 Channels.
<br /><br />
Configurable for 1 or 2 Flaps, they can be controlled via 1 Input or Independent with 2 Inputs.<br />
The Device can control Pneumatic valves with an Relay or 12V PWM with a Pull up Transistor.<br />
Lin Bus Flaps like the new Mercedes G Wagon cannot be controlled with this circuit, even tho the Flaps look like the PWM ones. Even same PartNumbers??<br />
<br /><br />
You will need:
<br />
&emsp;1x Arduino Nano [Example](https://www.amazon.de/-/en/Development-Connector-Microcontroller-Compatible-Arduino/dp/B0CX1B4X7M?crid=1LJVF5VUFRSUH&dib=eyJ2IjoiMSJ9.cc4yOvtKyvoZE6RptlkT8c3ESYKSzO55JsjactZJ82vCBD2eAys_W70dC4wTMX6gJVMH3PSWQJBUc7ccbXYPkJLhfB_7UA-B74PVodzZGO6jRwAbV7wa8DVSicrpQFEU3J71eO0oRK7tdmJoX628qxuIOCYtJBhqUIO_ZLYXFVJsMc4jrbZhlC3UCXcpIizzikvnhglF-AR3wyC_JEZH7B5YmsbiXpfbocW0s-DqcBo._jtZc5qF_1bvCJEgwhEtMJxz1GDpLoMqusFJyk0IXAo&dib_tag=se)<br />
&emsp;1x RF Receiver 433MHZ [Example](https://www.amazon.de/-/en/Wireless-Receiver-Transmitter-Raspberry-Learning/dp/B0838WXFKJ?crid=3J9ENXN9VQB5&dib=eyJ2IjoiMSJ9.2e1dP4mb2b5ASUn1R3JRiavMNNSNOye_x5jBjUhxnLYAihMpO2-aEgg5luBJVuIRbahjIAtqcMaPYek7C-s0fTjmuOqxBI8DXe31Gx5CqiiO39g8sAq03OPXJLhqMyrsRd_U1Kb2hzYXFTtmEWwO3uR1skYn6HLlPrjLejVd4QiCOb6o2BjTUlI0A1RqvTZIuzkmCe7kKjkhHv6xZbrQQBBXxKnfGPyZzj9Q8ycXj-o.1FbItLtXAUiFC0aB1gTEbNWw1czw3PoQgSf26tv3XAs&dib_tag=se), but only the receiver Part<br />
&emsp;1x Remote [Example](https://www.amazon.de/-/en/DieseRC-Learning-Wireless-Transmitter-Receiver-Kt05-3/dp/B0B2LCJSV2?crid=1Q1BCW4LM02MN&dib=eyJ2IjoiMSJ9.nNskabRn6HTI1YkgJqTpUP-bczd9-FGQ5Hq2Ib3vIcHo4mDS4WvSgzQ8mUfTyUhJmqkhFdEjG-Q7UiYUY023fbDSNuZPiiGy2SXWncFZXilbKhasw8xmcgkgmSvzOd5Y1RUYPnymAsmVTOWZx0zSCKeFsWRTNPCwSQoYtkSDsqozNiSNZklCqX8NGegqQuuJ_4L_iSbqd0bsPqu7E3ATu5_1MkXWN-pJlmj0vbXzu5InxXEoe9XcCTqT5ncNB4Pps20JMOY4xC8MjIVYwUEvUYAt-1vaLBOYaULhLpqmmGs.rP6GXv4RrcUFYiVLkN6B8_M7B2w2fMxswB2JYNqJu1E&dib_tag=se)<br />
&emsp;few transistors, resistors, lm7805, and a relay for Pneumatic mode
<br /><br />
ToDo:<br />
&emsp;Make a better Readme<br /><br />
&emsp;Do a little more documentation<br />
&emsp;make circuit/schematic/pcb design<br />
&emsp;Take Pictures and Upload them<br />
&emsp;Testing the Pneumatic Modus<br />
<br />Tested on:<br />
&emsp;Audi S3 mj. 2017<br />
&emsp;Lamborghini Urus mj. 2024<br />
<br />This Project is Written in Visual Studio Code with platformio addon.