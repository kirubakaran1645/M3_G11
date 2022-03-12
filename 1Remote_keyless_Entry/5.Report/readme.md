
# TABLE OF CONTENT
|S.NO| CONTENT |
|--|-------|
|1.| REMOTE KEYLESS ENTRY|
|1.1 |INTRODUCTION|
|1.2| FEATURES|
|1.3| STATE OF ART|
|2.| REQUIREMENTS|
| 2.1 |HIGH LEVEL REQUIREMENTS|
|2.2| LOW LEVEL REQUIREMENTS|
|3.| ARCHIECTURE|
|3.1 |BEHAVIOURAL DIAGRAM |
|3.1.1 |HIGH LEVEL BEHAVIOURAL DIAGRAM|
|3.1.2 |LOW LEVEL BEHAVIOURAL DIAGRAM|
|3.2| STRUCTURAL DIAGRAM|
| 3.2.1.| HIGH LEVEL STRUCTURAL DIAGRAM|
|3.2.2 |LOW LEVEL STRUCTURAL DIAGRAM|
|4.| TEST PLAN AND OUPUT|
|4.1| HIGH LEVEL TEST PLAN|
|4.2|LOW LEVEL TEST PLAN|

# 1.REMOTE KEYLESS ENTRY
## 1.1 INTRODUCTION
- A keyless entry system is an electronic lock that controls access to a vehicle car without using a traditional mechanical key. The term keyless entry system originally meant a lock controlled by a keypad located at or near the driver's door, which required entering a predetermined or self-programmed.
_________________________________________
## 1.2 FEATURES
- System can Lock the car from distance by pressing the button once.
- System can unlock the car from distance by pressing the button twice.
- System can Activate or Deactivate the alarm.
- System can Activate Lights.
___________________________________________________________
## 1.3 STATE OF ART
- To controll the using **Remote Access**.
- System **ENCRYPTION** for security.
- **RKE** is designed to provide the secured access to the car
_____________________________________

# SWOT
[![image](https://www.linkpicture.com/q/RKE-SWOT.jpeg)](https://www.linkpicture.com/view.php?img=LPic622ba526d1ed81339196745)

# 5W'S 1H
[![image](https://www.linkpicture.com/q/RKE.jpeg)](https://www.linkpicture.com/view.php?img=LPic622ba44f1bf761650970026)
# 2. REQUIREMENTS
## 2.1 HIGH LEVEL REQUIREMENTS
|ID| REQUIREMENTS |
|--|--------------|
|HLR 1| SYSTEM WILL LOCK THE VEHICLE|
|HLR 2| SYSTEM WILL UNLOCK THE VEHICLE|
|HLR 3| SYSTEM WILL ACTIVATE/DEACTIVATE THE ALARM|
|HLR 4| SYSTEM WILL ACTIVATE LIGHT|
## 2.2 LOW LEVEL REQUIREMENTS
| ID | FOR HIGH LEVEL REQUIREMENTS ID | LOW LEVEL REQUIREMENT |
|------| ----- |-----------------------|
|LLR 1|HLR 1| IF THE BUTTON IS PRESSED ONCE ALL THE LED'S WILL GLOW|
|LLR 2|HLR 2| IF THE BUTTON IS PRESSED TWICE ALL THE LED'S WILL TURN OFF|
|LLR 3|HLR 3| IF THE BUTTON IS PRESSED THREE TIMES THE LED'S WILL TURN ON IN CLOCKWISE MANNER|
|LLR 4|HLR 4| IF THE BUTTON IS PRESSED FOUR TIMES THE LED'S WILL TURN ON IN ANTI-CLOCKWISE|
# 4. TESTPLAN AND OUTPUT
## 4.1 HIGH LEVEL TEST PLAN

| TEST ID | DESCRIPTION | I/P | EXP O/P | ACTUAL O/P | RESULT|
| --- | --- | --- | --- | --- | ---|
| 01 | LOCK | BUTTON PRESSED ONE TIME  | WILL LOCK THE VEHICLE | WILL LOCK THE VEHICLE  | PASS|
| 02 | UNLOCK | BUTTON PRESSED TWO TIMES | WILL UNLOCK VEHICLE | WILL UNLOCK VEHICLE | PASS|
| 03 | ACTIVATE / DEACTIVATE ALARM | BUTTON PRESSED THREE TIMES | WILL ACTIVATE / DEACTIVATE ALARM  | WILL ACTIVATE / DEACTIVATE ALARM |PASS|
| 04 | ACTIVATE LIGHT |BUTTON PRESSED FOUR TIMES | WILL TURN ON LIGHT |WILL TURN ON LIGHT|PASS|


## 4.2 LOW LEVEL TEST PLAN

| TEST ID | DESCRIPTION| I/P | EXP O/P | ACT O/P | RESULT |
| --- | --- | --- | --- | --- | --- |
| 01 | VERIFY FOR LOCK |  BUTTON PRESSED ONCE  | WILL TURN ON ALL LED's  | WILL TURN ON ALL LED's  | PASS|
| 02 | VERIFY FOR UNLOCK | BUTTON PRESSED TWICE  | WILL TURN OF ALL LED's | WILL TURN OFF LED's | PASS |
| 03 | VERIFY FOR ALARM ACTIVATE/DEACTIVATE | BUTTON PRESSED THREE TIMES| WILL TURN ON LED's ONCE IN CLOCKWISE MANNER | WILL TURN ON LED's ONCE IN CLOCKWISE MANNER | PASS|
| 04 | VERIFY FOR APPROACH LIGHT |BUTTON PRESSED FOUR TIMES | WILL TURN ON LED's IN ANTICLOCKWISE MANNER | WILL TURN ON LED's IN ANTICLOCKWISE MANNER | PASS|
