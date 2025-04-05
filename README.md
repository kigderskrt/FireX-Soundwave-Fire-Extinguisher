# 🔊 FireX – Soundwave Fire Extinguisher

A low-cost, reusable, and chemical-free fire extinguisher that uses sound waves to suppress small fires. Developed with an Arduino-based system, FireX offers real-time fire detection, SMS alerts, and emergency calls using a SIM800L module — an eco-friendly innovation built for safer communities.

---

## 📋 Table of Contents
- [About the Project](#about-the-project)
- [Features](#features)
- [How It Works](#how-it-works)
- [Schematic & Code](#schematic--code)
- [Bill of Materials](#bill-of-materials)
- [Setup and Installation](#setup-and-installation)
- [Future Improvements](#future-improvements)
- [References](#references)

---

## 📌 About the Project
FireX aims to address the rising number of fire incidents in urban areas, especially in the Philippines, by providing an affordable and sustainable alternative to traditional fire extinguishers. Using sound waves instead of chemicals, FireX is safe for home use and better for the environment.

---

## 🚀 Features
- 🔥 Flame Detection using infrared sensors  
- 📢 High-frequency Sound Wave Generator for fire suppression  
- 📲 Automatic SMS & Call Notifications via SIM800L  
- 🔄 Reusable & Rechargeable system  
- 🌱 Eco-Friendly – no chemicals used  

---

## ⚙️ How It Works
When a fire is detected using a flame sensor, FireX activates the following sequence:

1. **Triggers a buzzer alarm**
2. **Activates a soundwave subwoofer to suppress fire**
3. **Sends SMS alerts to up to 3 contacts**
4. **Initiates emergency phone calls automatically**

---

## 🛠 Schematic & Code
- 🔌 Breadboard & Schematic Diagram: Available in the repository  
- 💻 Main Microcontroller: Arduino Uno  
- 🔉 Soundwave Generator: 6" Subwoofer driven by wave circuits  
- 📟 Alert Module: SIM800L for SMS and Call functions  

> View full source code [here](#) *(include `.ino` file in your repo)*

---

## 🧾 Bill of Materials

| Component                     | Qty  | Price (PHP) |
|------------------------------|------|-------------|
| Arduino Uno                  | 1    | ₱150        |
| SIM800L Module               | 1    | ₱140        |
| 6" Subwoofer                 | 1    | ₱430        |
| 1F PVC Pipe                  | 1    | ₱40         |
| Buzzer                       | 1    | ₱9          |
| 3.7V Lithium Battery         | 2    | ₱80         |
| 1GB SD Card                  | 2    | ₱50         |
| Flame (IR) Sensor Module     | 2    | ₱60         |
| Switch                       | 2    | ₱10         |
| Breadboard & Wires (frit)    | 1    | ₱200        |
| **Total Cost**               | —    | **₱1169**   |

---

## 🧰 Setup and Installation
1. Upload the provided `.ino` sketch to your Arduino Uno.
2. Connect the SIM800L module (TX/RX: Pins 2 & 3).
3. Connect flame sensors to digital pin 5.
4. Connect buzzer and subwoofer to output pins.
5. Insert working SIM card with load for SMS/call.
6. Power the system with a 3.7V rechargeable lithium battery.

---

## 🌱 Future Improvements
- Add temperature and gas sensors for smarter detection
- Integrate mobile app for remote alerts
- Use AI/ML for fire pattern recognition
- Use custom PCB for compact deployment

---

## 📚 References
- [Fire incidents rise in PH – PIA](https://pia.gov.ph/news/2023/05/02/ph-fire-incidents-up-40-bfp)  
- [BFP reports 13K fires in 2022](https://www.pna.gov.ph/articles/1191573)  
- [Fire safety research](https://firesciencereviews.springeropen.com/articles/10.1186/s40038-016-0014-1)  
- [Dangers of firefighting chemicals](https://slate.com/technology/2022/07/firefighting-foam-chemicals-wildfires-pfas.html)

---

> Created by Computer Engineering students for the final project in Embedded Systems Design.
