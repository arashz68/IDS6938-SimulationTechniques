#Homework 1 : The Jello Cube (Continuous Simulation Assignment
## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)


This is the framework for homework #1. Please first read the [homework writeup](HomeWork%231.pdf).

The assignment is due: Monday, February 27 at 11:59PM (EST)


Arash Zarmehr (*)



Part One 
The following ODE can be solved easily with Laplace method. Laplace method is the easy way to reach exact solution of some ODEs.

dy/dx=y-(1/2)*e^(x/2)*sin⁡(5x)+5e^(x/2)*cos⁡(5x)

Solution:
ℒ 
S*Y-Y(0)=Y-0.5*(5/((S-0.5)^2+25))+5*((S-0.5)/(((S-0.5)^2+25))

Y*(S-1)=Y(0)+5*((S-0.5)/((S-0.5)^2+25)-0.5/((S-0.5)^2+25))

Y*(S-1)=Y(0)+5*((S-1)/((S-0.5)^2+25))  
One of the answer which called public answer is S=1 but this is not answer which work for us. 
The second answer is:
Y=5/((S-0.5)^2+25)
Now we can get Laplace inverse to find a solution which we need.
ℒ -1
y(x)=e^0.5x*sin⁡5x


Another way to find a solution for this ODE is to do Change of variables.
If we define a µ(x)= e^(-x)   and take integral we will reach the same solution.







| undeformed jello  | deformed jello |
| ------------- | ------------- |
| ![](images/undeformed3.png?raw=true)  | ![](images/deformed3.png?raw=true) |

