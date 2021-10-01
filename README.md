# Digital_Twin_Implementation

The concept of digital twins is a popular subject within the production industry and during the last couple of years, it has been expanding with the help of Industry 4.0. Digital Twins are a new mechanism to manage IoT devices and IoT systems-of-systems throughout their lifecycle.This project takes the case study of Object sorting using conveyor belt and robotic arm for implementation of digital twin. 

The Robotic Arm uses Ultra Torque Servo motors whose torque is 60kg-cm. The servo motors are initialized and movement (angles) are set; the code is written using Arduino IDE. 
A web camera is initialized using the Arduino and the baud rate is set to 9600 bits per second. The AC motor in the conveyor belt is of 0.5 HP, the speed of this motor is controlled using TRIAC concept. With TRIAC, the motor can be ON or OFF; the speed can be set to HIGH or LOW.

The object detection module from the Tensor Flow library is used for detection of different shapes. When the camera detects a square shape, the end effector of the robotic arm pushes the shape away from the conveyor belt and collected seperately. Whereas, the other shapes passes through the belt and reach the other side.

arm_1.ino --> Setting up motors
arm_2.ino --> Setting the angles (Servo Motors)
camera1.ino --> Interfacing the Camera
speed_control.ino --> Controlling the speed of the Motor of the Conveyor Belt
object_detection.py --> Object/Shape Detection 
Unity_3D_final.mp4 --> Digital Twin Implementation using Unity 3D software
conveyor_belt_final.mp4 --> Physical Implementation 
