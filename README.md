# ArduinoFlapControl
Control your Exhaust Flap with an Arduino Nano, an RF Receiver and a Remote.<br />
This is only working with VAG Flaps.<br />
Mercedes eg. uses Lin Bus.
<br /><br /><br />
I used a 4 Channel RF Receiver(cheap one from Amazon), but only used 2 Channels.
<br /><br />
You will need:
<br />
&emsp;1x Arduino Uno [Example](https://www.amazon.de/-/en/Development-Connector-Microcontroller-Compatible-Arduino/dp/B0CX1B4X7M?crid=1LJVF5VUFRSUH&dib=eyJ2IjoiMSJ9.cc4yOvtKyvoZE6RptlkT8c3ESYKSzO55JsjactZJ82vCBD2eAys_W70dC4wTMX6gJVMH3PSWQJBUc7ccbXYPkJLhfB_7UA-B74PVodzZGO6jRwAbV7wa8DVSicrpQFEU3J71eO0oRK7tdmJoX628qxuIOCYtJBhqUIO_ZLYXFVJsMc4jrbZhlC3UCXcpIizzikvnhglF-AR3wyC_JEZH7B5YmsbiXpfbocW0s-DqcBo._jtZc5qF_1bvCJEgwhEtMJxz1GDpLoMqusFJyk0IXAo&dib_tag=se)<br />
&emsp;1x RF Receiver 433MHZ [Example](https://www.amazon.de/-/en/Wireless-Receiver-Transmitter-Raspberry-Learning/dp/B0838WXFKJ?crid=3J9ENXN9VQB5&dib=eyJ2IjoiMSJ9.2e1dP4mb2b5ASUn1R3JRiavMNNSNOye_x5jBjUhxnLYAihMpO2-aEgg5luBJVuIRbahjIAtqcMaPYek7C-s0fTjmuOqxBI8DXe31Gx5CqiiO39g8sAq03OPXJLhqMyrsRd_U1Kb2hzYXFTtmEWwO3uR1skYn6HLlPrjLejVd4QiCOb6o2BjTUlI0A1RqvTZIuzkmCe7kKjkhHv6xZbrQQBBXxKnfGPyZzj9Q8ycXj-o.1FbItLtXAUiFC0aB1gTEbNWw1czw3PoQgSf26tv3XAs&dib_tag=se), but only the receiver Part<br />
&emsp;1x Remote [Example](https://www.amazon.de/-/en/DieseRC-Learning-Wireless-Transmitter-Receiver-Kt05-3/dp/B0B2LCJSV2?crid=1Q1BCW4LM02MN&dib=eyJ2IjoiMSJ9.nNskabRn6HTI1YkgJqTpUP-bczd9-FGQ5Hq2Ib3vIcHo4mDS4WvSgzQ8mUfTyUhJmqkhFdEjG-Q7UiYUY023fbDSNuZPiiGy2SXWncFZXilbKhasw8xmcgkgmSvzOd5Y1RUYPnymAsmVTOWZx0zSCKeFsWRTNPCwSQoYtkSDsqozNiSNZklCqX8NGegqQuuJ_4L_iSbqd0bsPqu7E3ATu5_1MkXWN-pJlmj0vbXzu5InxXEoe9XcCTqT5ncNB4Pps20JMOY4xC8MjIVYwUEvUYAt-1vaLBOYaULhLpqmmGs.rP6GXv4RrcUFYiVLkN6B8_M7B2w2fMxswB2JYNqJu1E&dib_tag=se)
<br /><br />
&emsp;some wires<br />&emsp;The right connectors so you dont have to cut your Car wires<br />&emsp;waterproof Housing<br />&emsp;2x 470 ohm Resistors<br />&emsp;2x 1 kohm Resistors<br />&emsp;2x 2n2222 npn transistors 
<br /><br />
ToDo:<br />

&emsp;make circuit/schematic<br />
&emsp;Testing<br />
<br />Tested on:<br />
&emsp;Audi S3 with electronic Flaps<br />
&emsp;Lamborghini Urus mj. 2024<br />
