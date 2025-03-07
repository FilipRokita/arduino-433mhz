# Arduino 433 MHz Receiver/Transmitter

Arduino project for **receiving** and (in the future) **transmitting** signals using a **433 MHz RF module**.  
Currently, this repository contains code for a **433 MHz signal receiver**, which allows reading signals from wireless remotes, sensors, and other RF transmitters.

## 📡 Features
- ✅ Reads signals from **433 MHz RF remotes**
- ✅ Displays received codes in the **Serial Monitor**
- ✅ Supports **ASK/OOK modulation**
- ✅ Uses **rc-switch** library for easy decoding
- 🔜 Future update: **433 MHz signal transmission**

---

## 🛠️ Hardware Requirements
- 🏷️ **Arduino-compatible board** (e.g., Arduino UNO, ATmega328P)
- 📡 **433 MHz RF Receiver** (AM ASK/OOK)
- 🔌 Jumper wires
- (Optional) **Antenna (~17 cm wire) for better range**

### 🏗️ **Wiring**
| Receiver Pin | Arduino Pin |
|-------------|------------|
| VCC         | 5V         |
| GND         | GND        |
| DATA        | D2         |

---

## 🚀 Getting Started
1. Install PlatformIO
2. Upload the Code to your Arduino
3. Open Serial Monitor

---

## 📝 Example Output
When pressing a button on a compatible remote, you should see:

```
433 MHz Receiver is ready
Received signal: 123456
Received signal: 654321
```

If no signal appears, check:
- 🔧 Wiring (ensure DATA is connected to **D2**)
- 📶 Antenna (use a ~17 cm wire for better range)
- 🔄 If your remote **ASK/OOK compatible**?

---

## 🔜 Future Updates
- [ ] Add **433 MHz transmitter** support
- [ ] Implement **custom protocol decoding**
- [ ] Integrate with **smart home automation**

---

## 📜 License
This project is open-source and licensed under the [**MIT License**](LICENSE).

---

## 🤝 Contributing
Pull requests and suggestions are welcome! If you encounter issues, feel free to create an **issue** in the repository.

---

## 📬 Contact
If you have any questions, reach out via GitHub Issues or discussions. 🚀

## Author
[Filip Rokita](https://www.filiprokita.com/)
