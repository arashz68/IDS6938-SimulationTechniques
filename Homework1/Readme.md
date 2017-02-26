#Homework 1 : The Jello Cube (Continuous Simulation Assignment
## IDS6938-Simulation Techniques - [University of Central Florida](http://www.ist.ucf.edu/grad/)


This is the framework for homework #1. Please first read the [homework writeup](HomeWork%231.pdf).

The assignment is due: Monday, February 27 at 11:59PM (EST)


Arash Zarmehr (*)



**Part One 
The following ODE can be solved easily with Laplace method. Laplace method is the easy way to reach exact solution of some ODEs.
dy/dx=y-(1/2)*e^(x/2)*sin(5x)+5e^(x/2)*cos(5x)

Solution:
(ℒ) 
S*Y-Y(0)=Y-0.5*(5/((S-0.5)^2+25))+5*((S-0.5)/(((S-0.5)^2+25))

Y*(S-1)=Y(0)+5*((S-0.5)/((S-0.5)^2+25)-0.5/((S-0.5)^2+25))

Y*(S-1)=Y(0)+5*((S-1)/((S-0.5)^2+25))  
One of the answer which called public answer is S=1 but this is not answer which work for us. 
The second answer is:
Y=5/((S-0.5)^2+25)
Now we can get Laplace inverse to find a solution which we need.
(ℒ -1)
y(x)=e^0.5x*sin(5x)


Another way to find a solution for this ODE is to do Change of variables.
If we define a µ(x)= e^(-x)   and take integral we will reach the same solution.

We were able to find a exact solution for this ODE, but sometimes it is very hard to find axact solution. Alternatively, math scientists inttroduces approxiame methods which try to find a solution with numerical ways but the problem is that the solution would not be exact. accurancy of these method was always part of scientific discussions. 


* * *



Now, we run a solution with four different method to compare them and see the accurancy of them. For methods are exact solution, Euler method, Midpoint method and RK4.

Table below shows the data for Euler, Midpoint, RK4 and exact solution with error percentage of each for h=0.1 and y(0)=0.

figure 1 shows the differences between three solution method and excct solution. the picture shows RK4 has a bettter result than other solutions and the result is more closer to the exact solution comparing to the others. 

![](images/1.png?raw=true

Figure 2 will compare different solutions error in one graph to show the accurancy of them.

![](images/2.png?raw=true

This graph is proof of better accurancy for RK4 comparing to other solutions.

Now it is a time to play with our step size with RK4 solution to see the differencces and impostance of choosing good step size to decrease  the error percentages and inrease the accurancy.

***

First of all, let's choose h=0.2 (multiple of last timme). Figure 3 will show the comparison of the RK4 and Exact solution and also error percentage.



![](images/3.png?raw=true

figure 3 












| undeformed jello  | deformed jello |
| ------------- | ------------- |
| ![](images/undeformed3.png?raw=true)  | ![](images/deformed3.png?raw=true) |

