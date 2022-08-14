# Sahayak - A Human Machine Interface

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-0.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-1.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-2.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-3.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-4.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-5.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-6.png" alt="1">

<img src="https://github.com/techyashu/ashu/blob/master/ashu/Sahayak/da50482b2e5af7dc79490b83529392c4-7.png" alt="1">

### ○ Problem Statement
- “People with physical disability or some sort of condition that restricts movement of all the four limbs are unable to use Computers and Smartphones, impeding their progress in life”
- “People admitted in Healthcare lying on bed with syringes and medical equipmenton their hands due to which they aren’t able to do anything even being mentally fit which ends up frustrating them often”

### ○ Approach
- "If we can Control Computer we can control almost everything. So my approach was that if We can make a device that will enable specially abled people to use computer, then we are almost done as if they are able to control computer then they can access things that are available by computers also it is very much possible to integrate useful and essential things they might need through some sort of automation."

### ○ Objective
- The objective of this project is to develop a pointing device controlled by any movement (head movement) that had the same functions as a conventional mouse and to evaluate the performance of the proposed device when operated by quadriplegic or physically challenged users.
- It can be used by People in healthcares lying on bed it will give them extra mobility and enable them to use some devices like PCs/Smartphones/TVs.

### ○ Solution
- "If We can Control Computer We can control almost everything. To control Computer all We need is a Mouse so We’ve developed an affordable Mouse for people with physical disabilities (quadriplegic) and Amputees which prevent them from using a mouse and thereby Computer and thereby a lots of technologies and Information."
- "Assistive System based Mouse and Keyboard for Specially Abled People which is Universal in its Application : Sahayak"
- "For people with limited mobility, this device can be held or attached to any part of their body. This would help people who are paralyzed or without having lower and upper limbs to use computers and phones. It has the same function as of a conventional mouse."
- "I have developed a Software for accessing different clicks (don't Install if you want to use just the left click) get that Installed and Just Plugin and Play. For Smartphone and LED Tvs Just Plug and Play"

### ○ How to Use :
- For Navigation/Movement of Cursor -> Move your Head
- For Click -> Blow onto the Mic
- For different Clicks -> Hover onto the UI > Click(by blowing) onto the Click Needed > Blow onto the Mic

### ○ Works with :
- Computers/Laptops
- Smartphones
- LED TVs

### ○ Target Community
- Specially Abled People Including quadriplegic and Amputees
- People Admitted in HealthCare for some sort disease cure where they need to be on bed for long-long time.
- Gaming Industry

### ○ Technical Implementation
- We have used MEMS (microelectromechanical systems) gyroscopes. MEMS are angular rate sensors, which are used whenever rate of turn (°/s) sensing is required without a fixed point of reference.
- We then Mapped it to displacement of the coordinate of Screen of the Desktop.
- We have Used then Mouse library and connected it with the output of MEMs via Microcontroller.
- For the Click We used a cheap sound sensor whose work is to send signals whenever there is a blow and then map it to 0-1023 and from there whenever We get a value greater than 500 it makes a signal and then We map it to the mouse click libraries and thereby click occurs!
- Next problem was that It was working great with left click but what about other clicks so After thinking a lot about it We thought of building UI for our Project so that It can have more Clicks and We Coded in Java and Built the UI
- It worked Great! As per the Click It changes the click mode We made to that if We get this click then this button should Work!
- For the Wireless We have used Radio Signals for the transmission between Transmitter and Receiver.

### ○ Innovation
- Connecting Specially Abled People with Technology to make their life easier
- Used Gyroscope to Sense Rate of Angular Spin and mapped it to the Coordinate of Screen.
- Used a Microcontroller which has USB interface
- Used Sound Sensor for Sensing the Left Click
- Made an UI in java for the different clicks other than Left Click
- This is the Only mouse that Facilitates all the Clicks
- Most Affordable Mouse for Specially Abled People (Low Cost)
- It is the first mouse for the Specially Abled Astronaut that would work in Space too as I have Used Gyroscope and Gyroscope do work in Space which made it Universal in its Application.
- Integration of it with Headphones (No product like this is available)
- Allowing patients to control devices on their own
- Two patients can play games among themselves
- Integratable with Computer Games and it becomes the gaming aid which is of low cost.

### ○ What will be the benefit of the idea to the target audience?
- Specially Abled People without having four of limbs or have limbs but are paralyzed including quadriplegic and Amputees With the Project Now they’ll be able to :
- Use Computer with all the Clicks (Left, Right, Left Hold (we can havemore functions))
- Can Read PDF Books Easily than Conventional Hardcopy books where then need to turn the physical pages
- Can Write Using Virtual Keyboard
- Can Surf Internet (help them to remain connected with Everyone as Normal people)
- Can Watch Videos and Learn New Set of Skills
- Can Teach Online
- Can Earn
- Can Attend Online Classes
- Can Place Calls on their own
- Can Use Apps & Websites and lot more
- Can Use Apps & Websites and lot more
- Can Use Apps & Websites and lot more
- Can switch On/Off Lights/Fans and electrical Appliances thorough Home Automation
- Can open Doors with Home Automation through Smartphone
- Can be Integrated to Assistive System Based Gesture Controlled Wheelchair
- For People Laid in HealthCare Beds
- “Patients now will be able to access TVs in hospitals and they can surf internet and can have a good time which will keep them away from negativity around. Also two patients can play game on the TV without using their hands or legs.”
- Keep them away from Bad Physiological effect and Severe Depression and Gives them Hope and a positive attitude towards life.

### ○ Novelty
- It will use Gyroscope MEMs Based with some optimized algorithm to give the accurate and precise value of angle of spin that will be converted into displacement which makes it very accurate.
- No need to sit in any orientation
- Accuracy at its maximum (No chances of error)
- It will not need Light or other requirement to work
- Left Click is initiated Inherently
- No Heavy Software Required
- No Calibration is Required
- Will have all kind of Clicks (Left, Right, Left Hold and Soon)
- It shall be integrated into something which is already In USE that is Headphones

### ○ Why headphone Integration?
"People using sahayak will not have to wear something different from what they wear. They wear headphones for listening music and now they'll be able to use mouse too, no need of wearing anything else"

# "SAHAYAK - BETTER TOGETHER"
