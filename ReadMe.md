</a>
<h3>Haisenteck - Flipper zero firmware Mod</h3><br>
Link all'installazione dell'ultima release tramite Web Updater:<a href='https://lab.flipper.net/?url=https://rawcdn.githack.com/haisenteck/flipperzero-Haisenteck/bff056cfb4c339a065f95c8f25fec76cf2dd67d8/dist/release/flipper-z-f7-update-Haisenteck_V1.2.1.tgz&channel=Haisenteck_V1.2.1&version=V1.2.1' target='_blank'>WEB UPDATER - RELEASE</a><br>
link al file di installazione stabile: <a href='https://github.com/haisenteck/flipperzero-Haisenteck/releases/tag/V1.2.1' target='_blank'>Versione STABILE</a><br>
Link al file di installazione DEV build: <a href='https://github.com/haisenteck/flipperzero-Haisenteck/blob/dev/dist/f7-C/flipper-z-f7-update-Haisenteck_V1.2.1.tgz' target='_blank'>Versione DEV Build</a><br>
Link al repository dei contenuti extra: <a href='https://github.com/haisenteck/Flipper_MicroSD' target='_blank'>Contenuti Extra per Micro SD</a><br>
<br>
# Novità<br>
- **FreeRTOS**<br>
<ul>
	<li>Upgrade da versione V10.5.1 a V10.6.0</li>
</ul>
- **BLUETOOTH**<br>
<ul>
	<li> Ble Spam FAP attiva</li>
	<del><li>modifica a libreria di base per inclusione di diverse modalità del bluetooth notification per presentare il flipper come dispositivo Apple.</li></del>
	<del><li>creato app per la gestione, si chiama FRUTTIVENDOLO.<br></del> App rimossa in quanto non più necessaria.</li>
	
</ul>
- **NFC**<br>
<ul>	
	<li> NFC REFACTOR
	<del><li>aggiunto riconoscimento corretto per le carte<ul></del>
 		<del><li>MIFARE Classic 4k - emulated (6131 NFC)</li></del>
		<del><li>MIFARE Classic 4k - emulated (6131 NFC)</li></ul></li></del>
	<li>ripristinato i dizionari mifare e non creati con Stepzor</li>
 	<li>aggiunto codici riconoscimento carte EMV</li>
</ul>
- **Sub-GHz**<br>
<ul>
	<li>SubGHz: Aggiunto AM_Q ai preset di utilizzo</li>
	<li>SubGhz: Aggiunto TPMS ai preset di utilizzo</li>
	<li>SubGhz: predisposizione per ulteriori wheather station e comandi dedicati. </li>
	<li>SubGhz Rolling Flaws - app aggiunta grazie a https://github.com/jamisonderek/flipper-zero-tutorials </li>
	<li>Subghz Shapshup - app aggiunta e corretto alcune parti di codice</li>
	<li>SubGhz - Protocolli Aggiunti:<ul>
		<li>Weather - Acurite 592			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Acurite 606TX			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Acurite 609TXC		-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Ambient Wheather		-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Auriol_AHFL			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Auriol HG06061		-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - GT-WT02				-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - GT-WT03				-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - inFactory-TH			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - LaCrosse_TX			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - LaCrosse_TX141THBv2	-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Nexus-TH				-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Oregon V1				-	lettura OK - salvataggio na - invio   </li>
		<li>Weather - Oregon2				-	lettura OK - salvataggio na - invio   </li>
		<li>Weather - Oregon3				-	lettura OK - salvataggio na - invio   </li>
		<li>Weather - ThermoPRO-TX4			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - TX8300				-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Wendox W6726			-	lettura OK - salvataggio OK - invio   </li>
		<li>Weather - Baldr Rain (supporto protocolo per Nexus) ------ attualmente rimosso per problemi (falsi riconoscimenti) ------</li>
		<li>SUBGHZ - X10					-	lettura OK - salvataggio OK - invio   </li>
		<li>SUBGHZ - POCSAG					-	lettura OK - salvataggio    - invio   </li>
		<li>SUBGHZ - YALE HSA  (supporto protocolo per Nexus) ------ attualmente rimosso per problemi (falsi riconoscimenti) ------</li>
		<li>TPMS - Schrader GG4				-	lettura OK - salvataggio    - invio   </li>
		</ul></li>
</ul>
- **VARIE**<br>
<ul>
	<li>rimosso svariate problematiche relative a submoduli di github bloccati.</li>
	<li>variazione di svariati parametri per ridurre i tempi morti tra i comandi e la frequenza di base del flipper (a discapito di un consumo leggermente superiore di batteria</li>
</ul>

- **FAP**<br>
sono un botto e cambiano spesso o aumentano... non pretendete che tenga aggiornato l'elenco ogni volta... se volete certezze guardate il sorgente o provate nel firmware.<br>
se volete una fap aggiornata, scrivetemi e cercherò l'aggiornamento.<br>

<ul>
<br>GPIO:<br>
    <li> Name: [BMI160] Air Mouse</li>
    <li> FAP Version: 0.8</li>
--------------------------------------------------
    <li> Name: driver</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: BarCode ScannerE</li>
    <li> FAP Version: (0, 5)</li>
--------------------------------------------------
    <li> Name: [ESP32] Camera Suite</li>
    <li> FAP Version: 1.3</li>
--------------------------------------------------
    <li> Name: Coffee EEPROM</li>
--------------------------------------------------
    <li> Name: free-dap</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: [MAYHEM] Camera</li>
--------------------------------------------------
    <li> Name: [MAYHEM] Motion detection</li>
--------------------------------------------------
    <li> Name: [MAYHEM] Nanny Cam</li>
--------------------------------------------------
    <li> Name: [MAYHEM] QR Code</li>
--------------------------------------------------
    <li> Name: [ESP32] Gravity</li>
    <li> FAP Version: 0.2.1</li>
--------------------------------------------------
    <li> Name: [LED] Flashlight</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Flipagotchi</li>
--------------------------------------------------
    <li> Name: Scope</li>
    <li> FAP Version: 0.2</li>
--------------------------------------------------
    <li> Name: [ESP32] Camera</li>
--------------------------------------------------
    <li> Name: esp-serial-flasher</li>
    <li> FAP Version: (1,1)</li>
--------------------------------------------------
    <li> Name: [GPIO] Input Reader 2</li>
--------------------------------------------------
    <li> Name: Atomic Dice Roller</li>
--------------------------------------------------
    <li> Name: [ESP32] Evil Portal</li>
--------------------------------------------------
    <li> Name: [GPIO] i2c Tools</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Radiation Sensor</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Pokemon Trading</li>
    <li> FAP Version: [1, 2]</li>
--------------------------------------------------
    <li> Name: [J305] Geiger Counter</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: [GPIO] Reader (aureli1c)</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: GPIO Controller</li>
--------------------------------------------------
    <li> Name: [NMEA] GPS</li>
    <li> FAP Version: 1.2</li>
--------------------------------------------------
    <li> Name: [HC-SR] Dist. Sensor</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: [ESP] IFTTT Button</li>
--------------------------------------------------
    <li> Name: BH1750</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Logic Analyzer</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: LoRA_Terminal</li>
--------------------------------------------------
    <li> Name: [Mx2125] Accelerometer</li>
--------------------------------------------------
    <li> Name: [MH-Z19] CO2 sensor</li>
--------------------------------------------------
    <li> Name: nrf24</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: nrf24</li>
--------------------------------------------------
    <li> Name: nrf24</li>
--------------------------------------------------
    <li> Name: nrf24</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: [RCWL0516] Radar Scan</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: RC2014 ColecoVision</li>
--------------------------------------------------
    <li> Name: [RCWL-0516] Motion Sensor</li>
--------------------------------------------------
    <li> Name: [GPIO] Sentry Safe</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Servo Tester 2</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Signal Generator</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: spi</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: SWD Probe</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: TAS playback",  # Displayed in menus</li>
    <li> FAP Version: (0, 1),  # (major, minor)</li>
--------------------------------------------------
    <li> Name: [GPIO] Timelapse</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: UART Terminal</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: u-blox GPS</li>
    <li> FAP Version: (0, 1), # major, minor</li>
--------------------------------------------------
    <li> Name: Temp sensors reader</li>
    <li> FAP Version: 1.4</li>
--------------------------------------------------
    <li> Name: [USPING] Dist. Sensor</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Wiegand Reader</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: WIFI Mapping</li>
--------------------------------------------------
    <li> Name: [ESP32] WiFi Marauder</li>
    <li> FAP Version: (6,4)</li>
--------------------------------------------------
    <li> Name: [WiFi] Scanner</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: [WII] EC Analyser</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: [GPIO] Wire Tester</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
<br>Games:<br>
    <li> Name: Arkanoid</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Asteroids</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Blackjack</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Bomberduck</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Chess</li>
    <li> FAP Version: (1, 9)</li>
--------------------------------------------------
    <li> Name: Chess Clock</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: DOOM</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: DVD Bouncer</li>
--------------------------------------------------
    <li> Name: Etch A Sketch</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Flappy Bird</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Game 15</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: 2048</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Game of Life</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Heap Defence</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Jetpack Joyride</li>
--------------------------------------------------
    <li> Name: Minesweeper</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Multi-Dice</li>
--------------------------------------------------
    <li> Name: Pong</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Reversi</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Roots of Life</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Rubik's Cube Scrambler</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: SUPER-CHIP</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Scorched Tanks</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Secret Toggle",  # Displayed in menus</li>
--------------------------------------------------
    <li> Name: Simon Says",  # Displayed in UI</li>
--------------------------------------------------
    <li> Name: Slot Machine</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Snake 2.0</li>
    <li> FAP Version: 2.0</li>
--------------------------------------------------
    <li> Name: Snake Game</li>
--------------------------------------------------
    <li> Name: Solitaire</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Sudoku</li>
    <li> FAP Version: 0.1</li>
--------------------------------------------------
    <li> Name: TAMA P1</li>
--------------------------------------------------
    <li> Name: Tanks</li>
--------------------------------------------------
    <li> Name: Tetris</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Tic Tac Toe</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: T-Rex runner</li>
    <li> FAP Version: 1.2</li>
--------------------------------------------------
    <li> Name: Video Poker</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Yatzee</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Zombiez</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
<br>Bluetooth:<br>
    <li> Name: Bad BT</li>
--------------------------------------------------
    <li> Name: BLE Spam</li>
    <li> FAP Version: 4.1</li>
--------------------------------------------------
    <li> Name: BT Serial App</li>
--------------------------------------------------
    <li> Name: FRUTTIVENDOLO</li>
--------------------------------------------------
    <li> Name: Bluetooth Remote</li>
--------------------------------------------------
<br>Tools:<br>
    <li> Name: Barcode App</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Brainfuck</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Caesar Cipher</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Calculator</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Calendar</li>
--------------------------------------------------
    <li> Name: CLI-GUI Bridge</li>
--------------------------------------------------
    <li> Name: Count Down Timer</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Counter</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: DTMF Dolphin</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: crypto</li>
    <li> FAP Version: (1, 13)</li>
--------------------------------------------------
    <li> Name: Nightstand Clock</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: QR Code</li>
    <li> FAP Version: (1, 1)</li>
--------------------------------------------------
    <li> Name: Chronometer</li>
--------------------------------------------------
    <li> Name: HEX Viewer</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Multi Converter</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Multi Counter</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: RFID detector</li>
    <li> FAP Version: 1.2</li>
--------------------------------------------------
    <li> Name: Orgasmotron</li>
--------------------------------------------------
    <li> Name: Password Generator</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Text Viewer</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: wolfssl</li>
    <li> FAP Version: 5.50</li>
--------------------------------------------------
<br>Media:<br>
    <li> Name: BPM Tapper</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Flizzer Tracker</li>
    <li> FAP Version: (0, 2)</li>
--------------------------------------------------
    <li> Name: Mandelbrot Set</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Metronome</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Morse Code</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Music Beeper</li>
--------------------------------------------------
    <li> Name: Music Player</li>
--------------------------------------------------
    <li> Name: Zero Tracker</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Ocarina</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Paint</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: SAM WTF</li>
--------------------------------------------------
    <li> Name: Text to SAM</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: Tuning Fork</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: USB Midi</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Video Player</li>
    <li> FAP Version: (0, 1)</li>
--------------------------------------------------
    <li> Name: WAV Player</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
<br>Infrared:<br>
    <li> Name: XRemote</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: IR Remote</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: IR Scope</li>
    <li> FAP Version: 1.2</li>
--------------------------------------------------
<br>Sub-GHz:<br>
    <li> Name: ShapShup</li>
--------------------------------------------------
    <li> Name: Sub-GHz Bruteforcer</li>
--------------------------------------------------
    <li> Name: Sub-GHz Playlist</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: POCSAG Pager</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: ProtoView</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
    <li> Name: Subghz Rolling Flaws</li>
    <li> FAP Version: (1, 4)</li>
--------------------------------------------------
    <li> Name: Spectrum Analyzer</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: TPMS Reader</li>
--------------------------------------------------
    <li> Name: Weather Station</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
<br>RFID:<br>
    <li> Name: RFID Beacon</li>
--------------------------------------------------
    <li> Name: [YRM100] UHF RFID</li>
--------------------------------------------------
<br>Misc:<br>
    <li> Name: jClock settings</li>
--------------------------------------------------
<br>NFC:<br>
    <li> Name: Mfkey32</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: magic</li>
    <li> FAP Version: 1.1</li>
--------------------------------------------------
    <li> Name: loclass</li>
    <li> FAP Version: 1.7</li>
--------------------------------------------------
<br>Electronics:<br>
    <li> Name: Resistance calculator",  # Displayed in menus</li>
    <li> FAP Version: (1, 1)</li>
--------------------------------------------------
<br>USB:<br>
    <li> Name: USB HID Autofire</li>
    <li> FAP Version: 1.0</li>
--------------------------------------------------
</ul>



<br>
<br>
#### **This firmware is a fork from** [FLIPPER ZERO OFFICIAL FIRMWARE](https://github.com/flipperdevices/flipperzero-firmware) <br>
and part take from: [DarkFlippers/unleashed-firmware](https://github.com/DarkFlippers/unleashed-firmware)<br>
app from: https://github.com/xMasterX/all-the-plugins <br>
and many other repository or source. <br>
<br>
