# TABLE OF CONTENT
|S.NO| CONTENT |
|--|-------|
|1.| BiCOM SYSTEM |
|1.1 |INTRODUCTION|
|1.2| FEATURES|
|1.3| STATE OF ART|
|2.| REQUIREMENTS|
| 2.1 |HIGH LEVEL REQUIREMENTS|
|2.2| LOW LEVEL REQUIREMENTS|
|3.| ARCHIECTURE|
|3.1 |BEHAVIOURAL DIAGRAM |
|3.2| STRUCTURAL DIAGRAM|
|4.| TEST PLAN AND OUPUT|
|4.1| HIGH LEVEL TEST PLAN|
|4.2|LOW LEVEL TEST PLAN|

# 1. BiCOM SYSTEM
## 1.1 INTRODUCTION
- **BiCom** system project is designed to show the status of car's information its a revert function of **RKE** this system show's the status of window, alarm status, car battery info and car door status. we can access the data by clicking the button on rke so we can view the discussed information.there are various features between car and the access module.
---
## 1.2 FEATURES
- System will display the window satus of vehicle
- system will display the alarm satus of vehicle 
- system will display the battery information of vehicle 
- system will display the door satus of vehicle 
_______________________
## 1.3 STATE OF ART
* Window status is shown when button is clicked once .
* Alarm status is displayed when button is clicked twice.
* Battery info is shown when the button is clicked three times.
* Door status of the car is viewd when button is pressed.
_______________________________

## SWOT ANALYSIS
[![image](https://www.linkpicture.com/q/Bicom-swot.jpeg)](https://www.linkpicture.com/view.php?img=LPic622bade665943465660021)
## 5W'S 1H
[![image](https://www.linkpicture.com/q/Bicom-swot.jpeg)](https://www.linkpicture.com/view.php?img=LPic622bade665943465660021)
________________________________________
# 2. REQUIREMENTS
## 2.1 HIGH LEVEL REQUIREMENT
| ID | HIGH LEVEL REQUIREMENTS |
| -------- | -------------- |
| HLR1 | SYSTEM WILL SHOW WINDOW STATUS OF THE VEHICLE |
| HLR2 | SYSTEM WILL SHOW ALARM STATUS OF THE VEHICLE |
| HLR3 | SYSTEM WILL VIEW THE BATTERY OF THE VEHICLE |
| HLR4 | SYSTEM WILL VIEW THE DOOR STATUS OF THE VEHICLE |
## 2.2 LOW LEVEL REQUIREMENT
| ID | LOW LEVEL REQUIREMENTS |
| ---|-------------- |
| HLR1 |ALL THE LED'S ON AT SAME TIME [GREEN,ORANGE,RED,BLUE]|
| HLR2 |ALL THE LED'S OFF AT SAME TIME [GREEN,ORANGE,RED,BLUE] |
| HLR3 |ALL THE LED'S ON AT CLOCKWISE MANNER [GREEN,ORANGE,RED,BLUE]|
| HLR4 |ALL THE LEDS'S ON AT ANTICLOCKWISE MANNER [GREEN,BLUE,RED,ORANGE]|
_______________________
# 3. ARCHIETECTURE


# 3.1 HIGH LEVEL BEHAVIOURAL DIAGRAM
[![image](https://www.linkpicture.com/q/FLOW-2.jpeg)](https://www.linkpicture.com/view.php?img=LPic622c3ca9273071100226799)
# LOW LEVEL BEHAVIOURAL DIAGRAM

# 3.2 STRUCTURAL DIAGRAM
[![image](https://www.linkpicture.com/q/FLOW-3.jpeg)](https://www.linkpicture.com/view.php?img=LPic622c3d58b35ca850880104)

_______________________________
# 4. TESTPLAN AND OUTPUT
## 4.1 HIGH LEVEL TEST PLAN

| TEST ID | DESCRIPTION | I/P | EXP O/P | ACTUAL O/P | RESULT|
| --- | --- | --- | --- | --- | ---|
| 01 | WINDOW STATUS | BUTTON PRESSED ONE TIME  | DISPLAY THE WINDOW STATUS | DISPLAY THE WINDOW STATUS  | PASS|
| 02 | DISPLAY ALARM STATUS | BUTTON PRESSED TWO TIMES | DISPLAY ALARM STATUS | DISPLAY ALARM STATUS | PASS|
| 03 | DISPLAY BATTERY INFO | BUTTON PRESSED THREE TIMES | DISPALY BATTERY INFO  | DISPLAY BATTERY INFO |PASS|
| 04 | DISPLAY DOOR STATUS |BUTTON PRESSED FOUR TIMES | DISPLAY DOOR STATUS |DISPLAY DOOR STATUS|PASS|


## 4.2 LOW LEVEL TEST PLAN

| TEST ID | DESCRIPTION| I/P | EXP O/P | ACT O/P | RESULT |
| --- | --- | --- | --- | --- | --- |
| 01 | VERIFY WINDOW STATUS |  BUTTON PRESSED ONCE  | ALL LED ON | ALL LED ON  | PASS|
| 02 | VERIFY ALARM STATUS | BUTTON PRESSED TWICE  | ALL LED OFF | ALL LED OFF | PASS |
| 03 | VERIFY BATTERY INFO | BUTTON PRESSED THREE TIMES| TURN ON ALL LED's CLOCKWISE | TURN ON ALL LED'S CLOCKWISE | PASS|
| 04 | VERIFY DOOR STATUS |BUTTON PRESSED FOUR TIMES | TURN ON ALL LED ANTICLOCKWISE| TURN ON LED's ANTICLOCKWISE | PASS|

