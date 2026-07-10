# NinjaArm — Journal Export

- Exported at: 2026-07-10T10:57:30Z
- Project ID: 1990
- Entries: 22

## Entry 1
- ID: 2123
- Author: Jason
- Created At: 2026-04-14T01:08:02Z

### Content

In this session, I mainly did reseach (google searching + sourcing parts on aliexpress). I began by creating a github repository and adding in some basic folders and header names, then moved to creating a word document containing everything related to my project. I did lots of  reseach on what materials to choose for the Arm, and then wrote it down in the document. Finally, I created a spreadsheet and started working on my BOM. I will be using aliexpress to source most of my parts, as it is cheaper to buy from there compared to amazon. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDQ4OCwicHVyIjoiYmxvYl9pZCJ9fQ==--1fb10bb1cd4d433152f425366c4ebf8c9b079360/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/IpcSVlLANcHv/timelapse-IpcSVlLANcHv.mp4
- https://public.lapse-hackclub.link/timelapses/4vyFI6BsOFDF/timelapse-4vyFI6BsOFDF.mp4
- https://public.lapse-hackclub.link/timelapses/DUxu6G1-t0e3/timelapse-DUxu6G1-t0e3.mp4

## Entry 2
- ID: 2265
- Author: Jason
- Created At: 2026-04-15T02:30:29Z

### Content

In this session, I got the majority of my BOM complete! I did some reseach and spent most of my time looking through aliexpress and shopping for parts. Theres still a few more changes that I want to make, but its mostly complete. Heres a general part by part explanation:

- Arduino Uno: will be the dev board I am using, it is cheap and simple to use
- 3 x MG996R servos - these will be metal, as metal is mcuh stronger and durable than the plastic servos. They will be the main arm servos
- 1 x MG90S - also metal, its a micro servo and will be used for the opening and closing of the claw
- 1 x PCA9685 - servo driver board, allows you to control the servos using 2 arduino pins
- Capacitors - 100uF caps will be placed across the power rails near the servos, a 1000 uF cap will be placed near the main power rail
- 20 AWG wire for power from psu to servo power rails
-22 AWG wire for potentiometers or extend servos if needed
-6v 10a psu: powers all 4 servos
-potentiometers: allows you to control each indiviual joint
-rubber bumpers: for the tip of the claw, allows arm to grip things

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDc4NywicHVyIjoiYmxvYl9pZCJ9fQ==--d694cae37486a2eba58fe6a811ab99ee20043242/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/Jc7SRH6eZsX8/timelapse-Jc7SRH6eZsX8.mp4

## Entry 3
- ID: 2391
- Author: Jason
- Created At: 2026-04-16T00:56:05Z

### Content

In this session, I seached on the internet for step files for parts of my project. Grabcad was very useful, as I found most of the files needed there, without much trouble. I then imported the step files of an arduino uno, various types of screws (to attach servos to their horns), an MG90s + MG996R, a potentiometer, and a PCA9685 servo driver board. Then, after laying out all the items, I carefully placed the horns into the servos, using section analysis (a tool that allows you to essentially see through layers of an object, so you can see how everything looks inside, kinda like an x-ray) to make sure the horn was properly aligned, and after I inserted the correct screw for that motor.


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDk5MSwicHVyIjoiYmxvYl9pZCJ9fQ==--155e68e64e222477ec6ba2773b391b4298887661/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/hgGNnR2oPSYi/timelapse-hgGNnR2oPSYi.mp4

## Entry 4
- ID: 2393
- Author: Jason
- Created At: 2026-04-16T01:03:42Z

### Content

In this session, I began working on a small stand which will hold the arduino and the servo board. I first did some searching to see where other robotic arms had placed their microcontroler and servo board, and noticed that a few had small stands for them, which made me want to make my own. I created a skech on the xy plane, and made simple outlines for the 2 objects. Then, I began working on the outlines in more detail, such as rounding the edges and making small indents for the underside of the boards (as they both have pins sticking out from benath, and if I just created a flat surface those pins would get damaged). Finally, I added circles in the designated areas, which will later become mounting holes (I will place screws in those areas to secure the boards and make sure they dont come off).

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDk5NCwicHVyIjoiYmxvYl9pZCJ9fQ==--5db020b93ed5911a810165baf38358318db89f72/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDk5NSwicHVyIjoiYmxvYl9pZCJ9fQ==--50cd9bbb1526f70b643b29117050edd249f10f07/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/eF8MB6bZOIM5/timelapse-eF8MB6bZOIM5.mp4
- https://public.lapse-hackclub.link/timelapses/rdZA9uExyc7x/timelapse-rdZA9uExyc7x.mp4

## Entry 5
- ID: 2524
- Author: Jason
- Created At: 2026-04-17T02:44:50Z

### Content

In this session, I worked on the stand for the servo drive board. I started off by trying to re-design the platform, as I thought that there was a simpler way to do it, which was just to make a few tall and wide support pillars, with heatset inserts placed inside the beams. However, this idea turned out to not be a viable option, as the thick support pillars collided with the pins sticking out from the bottom of the servo board. So, I decided to undo what I just did and go back to its original state before I modified it. However, after adjusting the size of the holes for pins to rest on, I had trouble extruding those holes, so I tried to change the sketch plane height. This did not go well, as there was now a green border to the sketched items (which did not seem good), so I deleted the old base and started over again. I quickly got back to where I left off, and from there I made the outline of the walls surrounding the board, as well as a cover. I plan to later add a snap-fit mechanism to the lid, as right now it is freely sitting on top of the walls.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTI3OCwicHVyIjoiYmxvYl9pZCJ9fQ==--3cd91f45becb69930dea58ba86a8380a425d919c/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTI4MCwicHVyIjoiYmxvYl9pZCJ9fQ==--d1605f1d0c1a19cd5602b2992613b593c6d43838/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/2_e7yR5VGdhH/timelapse-2_e7yR5VGdhH.mp4
- https://public.lapse-hackclub.link/timelapses/Km80DT9tvseS/timelapse-Km80DT9tvseS.mp4

## Entry 6
- ID: 2664
- Author: Jason
- Created At: 2026-04-18T03:19:59Z

### Content

In this session, I finished up the arduino + servo board display stand. I started by creating a "shell" of the servo case, which would keep the lid in place. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTU0OSwicHVyIjoiYmxvYl9pZCJ9fQ==--632fd0692dd240d3790e68a841b1e3e7bb3dbb09/image.png)

Next, I designed the case for the arduino board. I had some trouble here, as I had moved the position of the arduino but whenever I opened up my old sketch it still had the old position saved. After some searching, I decided to just give up, as it would be much easier to copy the old outline and paste it into a new sketch (with the updated location of the arduino). I made indents into the main rectangle base for pins on the underside of the ardino, and createdlid with not much difficulty. I did struggle a bit when trying to create a "shell," as the bodys kept merging and breaking. 

(picture of arduino case w/o lid)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTU1MywicHVyIjoiYmxvYl9pZCJ9fQ==--d5c9f0f3b6126c6770ab704e95dd796ae6792f9e/image.png)

I made the lids of both items slightly smaller than the shell, as you have to account for 3d printing toleraces and how easily it will be able to fit. I decided to make it 0.2mm smaller, as I wanted it to fit very snugly. 

Additionally, I spent some time renaming and organizing the bodys, as eventualy I will have much more and being organized will be a basic requirement. I also chamfered the bottom (to make it easier to print), and filleted the top edges to make it look nicer. 

Finally, I started designing the base for my robot arm. I started with a cylindrical shape (as it looks better than a square), and managed to create basic supports that the motor will screw into to secure itself. I addes 4 small feet around the outer ring to further help secure the base, as without strong support the arm could topple over. 


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTU1OSwicHVyIjoiYmxvYl9pZCJ9fQ==--a0da3e21a4386daae13b18165203d7b43f3b294f/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTU2MCwicHVyIjoiYmxvYl9pZCJ9fQ==--3e54a7dc60a60c248d64c741c409608b636d98fe/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/geJ_BHuLp1tK/timelapse-geJ_BHuLp1tK.mp4
- https://public.lapse-hackclub.link/timelapses/hTSPiJ4HO5i3/timelapse-hTSPiJ4HO5i3.mp4
- https://public.lapse-hackclub.link/timelapses/mdy9kUz6RKbB/timelapse-mdy9kUz6RKbB.mp4

## Entry 7
- ID: 2817
- Author: Jason
- Created At: 2026-04-19T03:26:01Z

### Content

In this session, I organized all of the files for my project inside of fusion. This is because there were lots of files in my robot arm folder (such as screws, servos, and ardinos), which is why I decided to make 3 sub-folders to help keep everything organized. Then, I made copies of my main design because I had a bunch of small cad items in one design, and I did not want everything to be cluttered and together. Next, I worked on the support structure for the servo controlling the rotation of my base, I added holes for heatset inserts (so I could screw the servos down). This is when I realized that the rotating part of the servo was supposed to be in the exact centre of the cylindrical base, as if it wasnn't it would rotate very weirdly. I then spent the rest of the session trying to centre the servo and re-arrange the supports to match the new location of the servo. I had some difficulty doing so, for example the sketches kept showing old positioning, but in the end I managed to centre it and adjust the supports to match. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTkwNywicHVyIjoiYmxvYl9pZCJ9fQ==--96271c29697c6f2d445c1c18005b38cc10a8d7d9/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NTkwOCwicHVyIjoiYmxvYl9pZCJ9fQ==--cec599e2e9f5042feb8c61d38099aed27acc6c4b/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/Nibm82Z2SXC8/timelapse-Nibm82Z2SXC8.mp4
- https://public.lapse-hackclub.link/timelapses/VLnR4CDz4hCW/timelapse-VLnR4CDz4hCW.mp4

## Entry 8
- ID: 2991
- Author: Jason
- Created At: 2026-04-20T01:00:56Z

### Content

In this session, I removed the supporting legs for my robotic arm base. This is because I did not like the look of them, and I plan to replace them with a simple larger circular ring (which I plan to do in a later session.) I also realized that one pair of mounting tabs were cutting into the side of the inner cylinder. To solve this, I created a small pocket of space for the mounting tab to reside in, solving the problem. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjIyOSwicHVyIjoiYmxvYl9pZCJ9fQ==--9e94c26d7c5da0fc0fb5f0851ab2aad7a33ff2b2/image.png)

Another thing I realized this session was that I would also have to plan for other cables to pass through the base and exit though a small openeing. This changed everything, as my old design only accounted for one cable coming from one direction, meaning that I had to redesign half of the inner section to accomodate for additional cables. I did this by creating a horizontal "bridge" on either sides of the cable-facing mounting tab, which resulted in much more open space for other cables to pass through. Finally, I added circle-shaped cuts to the "bridge," which would allow me to put heatset inserts in, providing a place for me to screw down the servo motor securely. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjIzMCwicHVyIjoiYmxvYl9pZCJ9fQ==--316e7571a6419dc270744e053968bdfbe287cc59/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjIzMiwicHVyIjoiYmxvYl9pZCJ9fQ==--87d5898918b2a69a5b15caf15304c4dacea17bd4/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/We8E2fnWdrky/timelapse-We8E2fnWdrky.mp4
- https://public.lapse-hackclub.link/timelapses/lg5yFUJsfQNC/timelapse-lg5yFUJsfQNC.mp4

## Entry 9
- ID: 3137
- Author: Jason
- Created At: 2026-04-21T02:08:18Z

### Content

In this session, I created a small circular ring around my base to serve as supports. I chose to do a ring instead of regular feet sticking out as I thought it looked more aesteically pleasing. Then, I renamed some sketches and analysises to organize them (as I have a lot, and I will soon have much more, so keeping them organized is important), and extruded a hole for cables to exit the cylinder base. Next, I created a new component for my project, which was the rotating platform! I created some small holes on the platform, providing a way to securely connect it to the servo horn down below. I spent a very long time doing this, as I couln't decide what order or shape I wanted to arrange my screws in. I eventually decided on a rectangular shpae with 4 holes, as it was simple yet sturdy. I then created a sketch on the rotating platform, and extruded an H shaped pillar, as I planned on attaching my second servo it it verticaly. This is when I realized that it did not look cool, so I decided to take inspiration from other robotic arm designs, and decided to have an angulared support beam. I spent the rest of the session working on this angular beam, and I had some struggles doing so. This is because it was hard for me to get an exact outline of the servo when trying to create a rectangle that would cut into the arm, but I eventualy got a rough outline in the end. 

![Screenshot 2026-04-20 220411.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjUwOSwicHVyIjoiYmxvYl9pZCJ9fQ==--b0707d4bd83982f98a244053128bc98722e38545/Screenshot 2026-04-20 220411.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjUwOCwicHVyIjoiYmxvYl9pZCJ9fQ==--b611bc6a690c5f12218ade3e8cf82ca1e3fec089/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/5guBlroU3n_b/timelapse-5guBlroU3n_b.mp4
- https://public.lapse-hackclub.link/timelapses/4ReAiGAaDVnr/timelapse-4ReAiGAaDVnr.mp4

## Entry 10
- ID: 3303
- Author: Jason
- Created At: 2026-04-22T00:22:11Z

### Content

In this session, I learned how to properly use components. This is because before, I did not understand what activiating a component meant or did, but after doing some reseach I now know, and I properly activated my spinning platform component and created bodies and sketches inside of there. Next, I decided to redo my base arm as I did not like the way it looked or was designed. I started by recreating the stand vertically (as it is much easier to do it this way compared to starting off on an angle), and made outlines around the MG996R motor. I then extruded those outlines and placed it onto the platform on an angle. I also redid the circular top of the platform arm, made the base cylinder smaller (as I thought it looked too big and would still be stable with less filament), and chamfered the edges of the arm for aestetics. I also figured out how I accualy wanted to connect each limb to another, as previously I did not really understand how it worked, but now I do (I now realize that the servo horn has to be sticking out on the other side in order to connect to the limb. I also left the back side of the servo open, as designing the arm to cover it entirely would be too bulky and inefficient. Instead, I will later create a small plastic cover to cover that backside.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjgzNywicHVyIjoiYmxvYl9pZCJ9fQ==--8c6a4281501ffb17beba1ed7c50ccedc60e062b0/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NjgzOCwicHVyIjoiYmxvYl9pZCJ9fQ==--fc5ebe46ff27f8c2e4833bfac1c31860bcf7a011/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/TwBLrp8ooQ4N/timelapse-TwBLrp8ooQ4N.mp4
- https://public.lapse-hackclub.link/timelapses/fhSWxYo0m7e6/timelapse-fhSWxYo0m7e6.mp4

## Entry 11
- ID: 3486
- Author: Jason
- Created At: 2026-04-23T02:01:48Z

### Content

In this session, I improved the cad design of my display stand, which currently holds my servo board as well as my microcontroller. I started by reversing the direction of my servo board case, as it made sense for the horizontal pins sticking out to point away from me. The reason I wanted to reverse that case specificaly and not just the entire design was because I still wanted my arduino to point to the right side, as I planned on having my laptop connect to it from the right. I also added a cool diagonal slant at the front of the display, with the name of my project, NinjaArm, engraved onto it, as well as a cool shuriken. However, when trying to engrave the text, I struggled for a long time, as it said "error, can't extrude." I was very confused when this message popped up, but I thought maybe it was because I was trying to extrude on a slant. After doing some reaseach and debugging to no avail, I stumbled across a source that mentioned something about the font possibly being the issue. I then went back into fusion and realized that I had selected a custom font I downloaded a while ago, which must have been the reason it wasent working as it was not a native fusion text font. Since I still wanted to use the same font, I decided to just make outlines of every letter and cut it into the stand that way, which is what I slowly did. Eventually, it did work so I am glad about that. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzE3NSwicHVyIjoiYmxvYl9pZCJ9fQ==--7a418e9c31f16d46c3d7ba230e748ca2ba5f8e9b/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NzE3NiwicHVyIjoiYmxvYl9pZCJ9fQ==--6079a52254a601b8018d9c160c3303dd8c634054/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/nIEcjLKMZyUB/timelapse-nIEcjLKMZyUB.mp4
- https://public.lapse-hackclub.link/timelapses/Yc4cUZNG80R1/timelapse-Yc4cUZNG80R1.mp4

## Entry 12
- ID: 3969
- Author: Jason
- Created At: 2026-04-26T01:45:20Z

### Content

In this session, I continued to work on the arm attached to the rotating base platform, and started the secondary arm. I first resized the shuriken on my display stand as it was too large, then imported that file into my main robo arm project so I could see it next to my robotic arm base. Next,  I redid the circle cutout for the servo horn, as when looking at it through section analysis, it was slightly misaligned. I fixed this by projecting the outline of the servo onto my spinning platform, then offsetting that outline by a few mm to leave some wiggle room, and finnaly extruding that outline into the platform to make a small cut. I then decided to make my platform arm 1mm thicker on each side, as I did not think 2mm on each side was strong enough to support the robotic arm. This meant that I had to redo the semicircle at the top of the arm (as I couldn't figure out how to make the circle line up with the walls in the sketch), but after some time I managed to do it. Next, I created a new component for my second arm peice, and I started off by wanting a semi-circle on each side, but then I realized that it would be tricky if I wanted to extend the length of the arm, so I ended up starting with only a semi circle on the bottom (near the point of rotation). After doing some more work on the second arm, I realized that I had forgoten to include mounting screw cutouts for my other project of a 65% keyboard, as there were none when I opened up the cad file. However, after downloading the step file I had previously uploaded to my github repository, it seemed like I did before, but the changes wern't saved, which was very strange. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODIwMiwicHVyIjoiYmxvYl9pZCJ9fQ==--d2f2075d5822c5113205ea9f8dad3a5edc6fdfdb/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6ODIwMywicHVyIjoiYmxvYl9pZCJ9fQ==--b67c171be8971291f6d745a2d920c16de06c9a6c/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/tMvJm5J4AH0z/timelapse-tMvJm5J4AH0z.mp4
- https://public.lapse-hackclub.link/timelapses/OSH5WVhMfeAZ/timelapse-OSH5WVhMfeAZ.mp4

## Entry 13
- ID: 4425
- Author: Jason
- Created At: 2026-04-29T01:11:18Z

### Content

In this session, I worked on the second arm part for my robotic arm. I started by adujusting the screw holes on the spinning platform that are used to connect it to the servo horn below, as they were all slighly misalgined. Then, I tried spliting my platform to break it down into two smaller sections, as it would make it easier to edit in the future. However, after doing some searching and trying for a while, I did not figure out how to do it so I gave up. Next, I began working on the second arm, and added screw holes to it. I also reduced the thickness of the side of the arm facing the rotating part, as after doing some thinking I realized that it would be very hard to screw screws onto it, and leaving some more space inbetween the moving parts would be a good idea. Finally, I added a section at the end of the arm to mount my third servo motor, as well as mounting holes for that. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTE4NSwicHVyIjoiYmxvYl9pZCJ9fQ==--128a8b7e9d94346623bdd6a802521093774ae1d0/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTE4NiwicHVyIjoiYmxvYl9pZCJ9fQ==--1b08e3871bda49ecf88e00ec4fc789754c055291/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/ca2c3Rs_o2GI/timelapse-ca2c3Rs_o2GI.mp4
- https://public.lapse-hackclub.link/timelapses/LdSGJ1KoMtYP/timelapse-LdSGJ1KoMtYP.mp4

## Entry 14
- ID: 4578
- Author: Jason
- Created At: 2026-04-30T03:58:52Z

### Content

In this session, I worked on creating the final moving peice for my robotic arm. I started by learning how to rotate a component from a certian point, and did so by seraching online. Next, I rounded off the second arm and chamfered it to make it look better, and copied it to use as the general structure of my third arm. However, I realized that if I made a modification to the copied arm, the same change would occur on the original arm, which is not what I wanted. I solved this by first copying the arm, but clicking "paste new," which would paste it as a seperate item. Finally, I arranged the last servo motor in the correct position as a claw, but I then realized that I had initialy intened to use a smaller servo motor specifically for the claw. So, tried importing the motor with screws and the horn into my fusion project, however I tried many times and it could not work. After doing lots of searching and testing to no avail, I decided to just remove everything else from the file the small servo was in, allowing me to easily copy and paste that servo into the main project. 


![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTU0NiwicHVyIjoiYmxvYl9pZCJ9fQ==--77f2973d0ba6059682602c896ecb08a8f942c6cf/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTU0NywicHVyIjoiYmxvYl9pZCJ9fQ==--8f4e3939ed201f506a992ee25bcba0915c546942/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/T2GELSiv76n6/timelapse-T2GELSiv76n6.mp4
- https://public.lapse-hackclub.link/timelapses/NU4N_BhAsdEZ/timelapse-NU4N_BhAsdEZ.mp4

## Entry 15
- ID: 4715
- Author: Jason
- Created At: 2026-05-01T03:58:57Z

### Content

In this session, I began working on the claw component of the robotic arm, and I think that it has become one of my favorite parts to design! I started by first setting up the mini servo in the general area on the arm where I wanted it to be in, and did some thinking on how I wanted the claw mechanism to work. I originally had the spinning part of the servo placed in the exact centre, but I realized it would make sense to place it slightly off centred, as I wanted my mechanism to use two gears to work. 
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTkzMCwicHVyIjoiYmxvYl9pZCJ9fQ==--22b22be208cd37466a3e4e878cf7f79fc10b4c75/image.png)
This is a picture of how I intend my claw to look like, as you can see, one servo turns one gear, which turns another gear, with both gears being connected to the claw mini arm. I followed a simple tutorial to help me model the parts needed for my claw, as I had no idea how to begin, or how I would model the tooth spaces on the gears. I managed to get 3 parts done, which isnt too much but its better than nothing. 
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6OTkzMiwicHVyIjoiYmxvYl9pZCJ9fQ==--fb9eef53a893d4540f5d1d93c9bd326accd6d171/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/jWlC54azbOX8/timelapse-jWlC54azbOX8.mp4

## Entry 16
- ID: 4857
- Author: Jason
- Created At: 2026-05-02T03:58:49Z

### Content

In this session, I decided to scrap my original idea of following a tutorial for a claw. I decided to restart and design my own from scratch, as I thought it would be more fun and unique. I started by creating a skech on the mini servo's horn, and created a similar claw-shape as I did before. However, this time my idea was to connect a rotating gear directly to the claw, without any extra long supports to help. This means that it will be much easier for me to design. Next, I did reseach on how to add a gear into fusion, and I found a tutorial and quickly figured out how. I spent some time creating multiple gears, as the gear created was slightly different from how I wanted it to be, for example sometimes they were too large or had too many gear teeth. After creating the perfect gear, I merged it with my pre-made arm, and duplicated it. There is currently two green circles floating way above my gears, I think those are the rotation points but I dont know why they are so high up. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTAzMDYsInB1ciI6ImJsb2JfaWQifX0=--ded4aac02ac342bb4f023a069307ba99b43cdffe/image.png)

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTAzMDcsInB1ciI6ImJsb2JfaWQifX0=--44454fa7e59d9956b6b599aee1e415d8226eff8d/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTAzMDgsInB1ciI6ImJsb2JfaWQifX0=--0908eb08e11b91a185e28f1fefdca531e90f8692/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/Cqg6LuCNXkWv/timelapse-Cqg6LuCNXkWv.mp4
- https://public.lapse-hackclub.link/timelapses/hUtEEVAKPwsk/timelapse-hUtEEVAKPwsk.mp4

## Entry 17
- ID: 5215
- Author: Jason
- Created At: 2026-05-03T03:57:20Z

### Content

In this session, I continued to work on the design of the claw gripper piece for my robotic arm. I started by transfering my claw design over to the main project file and creating a rectangular opening on the arm so I would be able to mount the servo and hold it in place. I added two holes in the arm to fit m2 heatset inserts, and tried deleting the old mounting holes on the claw as they didnt match up with the servo horn orientation in the main file. I fixed this my going back into the file containing the claw arm design, orienting the claw the same way as it was in the main file, and updating the main file with the new changes. Now that I think about it, I could have solved this problem by simpily rotating the horn and claw in the main file.... I also rotated the entire arm to make it look better, and also improved the design by adding unique cut angles and chamfers/fillets. I still need to figure out a way to attach the second claw part to the arm, however I plan on doing that in the next session. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTA3ODUsInB1ciI6ImJsb2JfaWQifX0=--4e288d1c91161a1886ff970ff8ddbe939fb8cc0c/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTA3ODcsInB1ciI6ImJsb2JfaWQifX0=--1cf092429f69a80bb56a54aadfb88b64112cd140/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/IzSoLVsRZi1q/timelapse-IzSoLVsRZi1q.mp4
- https://public.lapse-hackclub.link/timelapses/7HTEs1N0EzwE/timelapse-7HTEs1N0EzwE.mp4

## Entry 18
- ID: 6515
- Author: Jason
- Created At: 2026-05-11T00:20:59Z

### Content

In this session, I made lots of small design improvements. To start, I redid and improved the small cut at my base, which was made because one of the mounting tabs of a servo was colliding with the inner rim of the circular base. I then looked and re-analyzed my components to ensure everything was in order, and re-oriented some parts that were incorrectly rotated. Finally, I worked on the claw section, and did some reseach on how to split a body. This is because I realized that if I added a second gripper, the claw would be off-centred, so I would have to shift the servo section slightly in order to fix this. I managed to shift it, however I am still far from being done.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTM5NzAsInB1ciI6ImJsb2JfaWQifX0=--529b6b16dd36f337f0221c035008f46190527c9e/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MTM5NzEsInB1ciI6ImJsb2JfaWQifX0=--3398784bf4af1b2b0afe9d207ce4bee8f0d6e8f2/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/j1SjTv3xPzV6/timelapse-j1SjTv3xPzV6.mp4
- https://public.lapse-hackclub.link/timelapses/tEhKdpJviBKM/timelapse-tEhKdpJviBKM.mp4

## Entry 19
- ID: 10552
- Author: Jason
- Created At: 2026-05-31T02:14:06Z

### Content

In this session, I made many small changes as well as improved the claw design. I started by checking all my dimensions, for example I checked the heatset insert holes. I found that some were a bit too large or too deep, so I easily corrected them to the correct dimesnion of a 3mm diameter, being 3mm deep. Next, I realized that there was not a possible way that I would be able to screw in most of my components, so I made lots of holes for the main screws connecting the horns into the servo. This is because I planned to screw the arms and moving platform to the servo horns before screwing them into the motor, as it would make things easier. Next, I continued to work on the claw arm mechanism. I added a second claw, however I realized that there would be nothing holding it in place. So, I made this small contraption that would allow me to place the secondary claw pincer onto a extruded cylinder, then keep it in place (while allowing it to freely rotate) with a small 3d printed part that would be screwed into the claw.



![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQwNzQsInB1ciI6ImJsb2JfaWQifX0=--35012edd612022a12d0247ad48306d26f0adb8d3/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQwNzUsInB1ciI6ImJsb2JfaWQifX0=--ab6cc326b226991ab8d9aa5e5a6c0552e397dd71/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQwNzYsInB1ciI6ImJsb2JfaWQifX0=--b9a93f069f67fe7821c25bc5c6f94f1b12461ef6/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/HxRsaz0jpIKl/timelapse-HxRsaz0jpIKl.mp4
- https://public.lapse-hackclub.link/timelapses/57ekqN95MkHz/timelapse-57ekqN95MkHz.mp4

## Entry 20
- ID: 10782
- Author: Jason
- Created At: 2026-05-31T23:58:00Z

### Content

In this session, I created a small stand to hold the 4 potentiometers that I will be using to control the servos. I started by finding the cad files for a potentiometer online, downloading them, and aranging 4 of them equaly spaced in a row. I created a rectangular base, as well as a small cover with holes for the rotating knob part, to secure them (ensuring they dont fall out) which is connected to the base through screws. Finally, I found the step files for the knob caps online, and added them in. 

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQ2MTMsInB1ciI6ImJsb2JfaWQifX0=--a584addfc4d058ac433e0f3e75392684b2b53931/image.png)
![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjQ2MTUsInB1ciI6ImJsb2JfaWQifX0=--0c34572eaac7cc455bdbbb3a6e38687f7d789a48/image.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/WNaReajOqCzP/timelapse-WNaReajOqCzP.mp4
- https://public.lapse-hackclub.link/timelapses/Bku35VmY-2t7/timelapse-Bku35VmY-2t7.mp4
- https://public.lapse-hackclub.link/timelapses/s41LYirAMptS/timelapse-s41LYirAMptS.mp4

## Entry 21
- ID: 11023
- Author: Jason
- Created At: 2026-06-02T01:42:08Z

### Content

In this session, I made most of the schematic for my robotic arm project. I tried looking at many sites to do this such as tinkercad, however they all did not have the servo board that I needed to include. So, I decided to make my own schematic in canva whiteboard, and imported images of my components. I wired them together using colored lines, and was very satisfying to slowly see all of my parts connect together electrically. In my next session I have to add capacitators into my diagram, as I forgot to include those. I also almost forgot to include my potentiometers too, but I managed to remember.

![Screenshot 2026-06-01 213431.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6MjUyNzUsInB1ciI6ImJsb2JfaWQifX0=--0533279e2e8e05a756b6cf2d456b772cd6a65658/Screenshot 2026-06-01 213431.png)


### Recording Links

- https://public.lapse-hackclub.link/timelapses/c19503Z6Bjya/timelapse-c19503Z6Bjya.mp4
- https://public.lapse-hackclub.link/timelapses/qy5zU4mFUKlV/timelapse-qy5zU4mFUKlV.mp4

## Entry 22
- ID: 16543
- Author: Jason
- Created At: 2026-07-10T10:54:56Z

### Content

In this session, I finished up the scematic diagram of my robotic arm by adding in some capaciatators where needed. I also did some reseach and finalized my BOM, I ended up changing my 4mm m2 screws to 6mm ones, as they were too short to work well in my designs. I made the servo horn screw holes in my rotating platform and arms shorter, as they only needed to be 10mm deep (the length of the screws I had were 13mm).
Next, I went into the render section of fusion and took nice photos of my project. I made sure to use a nice looking background and different perspectives and lighting. Finally, I downloaded all of the cad files and uploaded them to the github repository, converted my csv to markdown (so I could paste it in the bom section of my readme), and wrote assembly instructions so anyone could easily repliacte my project at home.

![image.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEwMjUsInB1ciI6ImJsb2JfaWQifX0=--38d36e1f335b904db0fb2707046b27c0e1a30520/image.png)
![Screenshot 2026-07-10 091403.png](/user-attachments/blobs/redirect/eyJfcmFpbHMiOnsiZGF0YSI6NDEwMjYsInB1ciI6ImJsb2JfaWQifX0=--c609f451ac798fd9da22ee88e00f53d099bf9272/Screenshot 2026-07-10 091403.png)


### Recording Links

- https://lookout.hackclub.com/api/media/f6655046-3b48-4eee-98cb-9e46a2fe07f3/video.mp4
- https://lookout.hackclub.com/api/media/6a2de0c9-d5af-4267-b48c-3b403d785838/video.mp4
- https://lookout.hackclub.com/api/media/f62a8af8-245a-4a91-9184-998d22d92609/video.mp4
