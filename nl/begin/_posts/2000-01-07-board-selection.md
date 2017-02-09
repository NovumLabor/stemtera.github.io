---
title: "Introductie - Bord Selectie"
style: two-col-page
lang: nl
contents:
- Bord Selectie
- Port Selectie
---

## Bord Selectie

Na het aansluiten van de (STMB) op de computer is het tijd om in de Arduino IDE aan te geven met welk type bord je aan de slag gaat. Deze instellingen zijn te vinden in het **`Tools`** (nl: Hulpmiddelen) menu.

Plaats de muis boven het **`Tools`** (nl: Hulpmiddelen) menu en klik één keer op **`Tools`** (nl: Hulpmiddelen). Nadat het **`Tools`** (nl: Hulpmiddelen) menu verschijnt, beweeg de muis naar het **`Board`** submenu waarna een andere submenu met een lijst van borden zal verschijnen. Selecteer **Arduino/Genuino Uno** door erop te klikken. Arduino IDE is nu ingesteld voor gebruik met de (STMB).

De (STMB) is namelijk 100% compatibel met Arduino UNO, alleen niet beschikbaar in de lijst van het Arduino Software's Tools (nl: Hulpmiddelen) menu. Selecteer daarom dus "Arduino/Genuino Uno".
{: .info }

## Poort Selectie

Het is ook nodig de communicatie port voor de (STM) in de Arduino IDE in te stellen. Onder het **`Tools -> Port`** (nl: Hulpmiddelen -> Poort) submenu, selecteer je de desbetreffende poort waaraan je (STMB) is aangesloten. De **`Port`** (nl: Poort) namen verschillen per operating systeem.

![Windows Logo](img/windows_logo.svg){: .sixteenth-h .left }Op een Windows Operating Systeem zal de Arduino IDE de (STMB) weergeven als **`Port: "COMx (Arduino/Genuino Uno)"`**

![Mac Logo](img/mac_logo.svg){: .sixteenth-h .left }Op een Mac OS zal de Arduino IDE de (STMB) weergeven als **`Port: "/dev/tty.usbmodem"`**

![Linux Logo](img/linux_logo.svg){: .sixteenth-h .left }Op een Linux Operating Systeem zal de Arduino IDE de (STMB) weergeven als **`Port: "/dev/ttyACM0"`**

Nadat de poort is geconfigureerd kan je je eerste schets uploaden.

![STEMTera Breadboard selection in Arduino IDE](img/arduino_board_selection.svg){: .three-quarter-h-h .center }
