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



![](images/1.png)



Figure 2 will compare different solutions error in one graph to show the accurancy of them.



![](images/2.png)



This graph is proof of better accurancy for RK4 comparing to other solutions.



Now it is a time to play with our step size with RK4 solution to see the differencces and impostance of choosing good step size to decrease  the error percentages and inrease the accurancy.



***



First of all, let's choose h=0.2 (multiple of last time), h=0.5, h=1.0. Figure 3,4 and 5 will show the comparison of the RK4 and Exact solution and also error percentage.







![](images/3.png)





![](images/4.png)





![](images/5.png)











lets take a look at figure 1 and 3 and compare the data we gained with h=0.1 and h=0.2.

if we choose some critical points in the graph such as x=8.8, the error percentage is 449.95% for h=0.1. At the same point x=8.8 with the h=0.2, error percentage is 449.6%, for h=0.5 is 9.89% and for h=1.0 is 41.53%.













in a nutshell, varing the integration method will changes accurancy as we saw in the first figure and comparing the error percentages. When we increase the x value, the error percentages are increasing and getting far away from the exact solution.

Increaing in the steping size will decreasing accurancy. So, the most accurate method is RK4 due to nearest answer to the exact solution with less error percentages. Actually, RK4 is combiantion of other two plus more features.

Table one shows the result value from different solution methods.

@[](data.txt)




| X  | RK1 | RK2 | RK4 |  EXACT |
| ------------- | ------------- | ------------- | ------------- |------------- |
| 0.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 0.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.3  | 0.2 | 0.3 | 0.4 |0.4 |
| 1.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.7  | 0.2 | 0.3 | 0.4 |0.4 |
| 1.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 1.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.1  | 0.2 | 0.3 | 0.4 |0.4 |
| 2.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.5  | 0.2 | 0.3 | 0.4 |0.4 |
| 2.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 2.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.3  | 0.2 | 0.3 | 0.4 |0.4 |
| 3.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.7  | 0.2 | 0.3 | 0.4 |0.4 |
| 3.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 3.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.1  | 0.2 | 0.3 | 0.4 |0.4 |
| 4.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.5  | 0.2 | 0.3 | 0.4 |0.4 |
| 4.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 4.9  | 0.2 | 0.3 | 0.4 |0.4 |
| 5.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.3  | 0.2 | 0.3 | 0.4 |0.4 |
| 5.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.7  | 0.2 | 0.3 | 0.4 |0.4 |
| 5.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 5.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 6.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 6.1  | 0.2 | 0.3 | 0.4 |0.4 |
| 6.2  | 0.2 | 0.3 | 0.4 | 0.4 |0.4 |
| 6.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 6.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 6.5  | 0.2 | 0.3 | 0.4 |0.4 |
| 6.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 6.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 6.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.0  | 0.2 | 0.3 | 0.4 |0.4 |
| 7.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.4  | 0.2 | 0.3 | 0.4 |0.4 |
| 7.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 7.8  | 0.2 | 0.3 | 0.4 |0.4 |
| 7.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.0  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.2  | 0.2 | 0.3 | 0.4 |0.4 |
| 8.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.4  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.6  | 0.2 | 0.3 | 0.4 |0.4 |
| 8.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.8  | 0.2 | 0.3 | 0.4 | 0.4 |
| 8.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.0  | 0.2 | 0.3 | 0.4 |0.4 |
| 9.1  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.2  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.3  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.4  | 0.2 | 0.3 | 0.4 |0.4 |
| 9.5  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.6  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.7  | 0.2 | 0.3 | 0.4 | 0.4 |
| 9.8  | 0.2 | 0.3 | 0.4 |0.4 |
| 9.9  | 0.2 | 0.3 | 0.4 | 0.4 |
| 10.0  | 0.2 | 0.3 | 0.4 | 0.4 |

Table 2 will show result value for RK4 with different step sizes.





| X | RK4,0.2 | RK4,0.5 | RK4,1.0 |
| ------------- | ------------- | ------------- | ------------- |
| 0.1  | 0.2 | 0.3 | 0.4 |
| 0.2  | 0.2 | 0.3 | 0.4 | 
| 0.3  | 0.2 | 0.3 | 0.4 | 
| 0.4  | 0.2 | 0.3 | 0.4 | 
| 0.5  | 0.2 | 0.3 | 0.4 |
| 0.6  | 0.2 | 0.3 | 0.4 | 
| 0.7  | 0.2 | 0.3 | 0.4 | 
| 0.8  | 0.2 | 0.3 | 0.4 | 
| 0.9  | 0.2 | 0.3 | 0.4 |
| 1.0  | 0.2 | 0.3 | 0.4 | 
| 1.1  | 0.2 | 0.3 | 0.4 | 
| 1.2  | 0.2 | 0.3 | 0.4 | 
| 1.3  | 0.2 | 0.3 | 0.4 |
| 1.4  | 0.2 | 0.3 | 0.4 | 
| 1.5  | 0.2 | 0.3 | 0.4 | 
| 1.6  | 0.2 | 0.3 | 0.4 | 
| 1.7  | 0.2 | 0.3 | 0.4 |
| 1.8  | 0.2 | 0.3 | 0.4 | 
| 1.9  | 0.2 | 0.3 | 0.4 | 
| 2.0  | 0.2 | 0.3 | 0.4 | 
| 2.1  | 0.2 | 0.3 | 0.4 |
| 2.2  | 0.2 | 0.3 | 0.4 | 
| 2.3  | 0.2 | 0.3 | 0.4 | 
| 2.4  | 0.2 | 0.3 | 0.4 | 
| 2.5  | 0.2 | 0.3 | 0.4 |
| 2.6  | 0.2 | 0.3 | 0.4 | 
| 2.7  | 0.2 | 0.3 | 0.4 | 
| 2.8  | 0.2 | 0.3 | 0.4 | 
| 2.9  | 0.2 | 0.3 | 0.4 |
| 3.0  | 0.2 | 0.3 | 0.4 | 
| 3.1  | 0.2 | 0.3 | 0.4 | 
| 3.2  | 0.2 | 0.3 | 0.4 | 
| 3.3  | 0.2 | 0.3 | 0.4 |
| 3.4  | 0.2 | 0.3 | 0.4 | 
| 3.5  | 0.2 | 0.3 | 0.4 | 
| 3.6  | 0.2 | 0.3 | 0.4 | 
| 3.7  | 0.2 | 0.3 | 0.4 |
| 3.8  | 0.2 | 0.3 | 0.4 | 
| 3.9  | 0.2 | 0.3 | 0.4 | 
| 4.0  | 0.2 | 0.3 | 0.4 | 
| 4.1  | 0.2 | 0.3 | 0.4 |
| 4.2  | 0.2 | 0.3 | 0.4 | 
| 4.3  | 0.2 | 0.3 | 0.4 | 
| 4.4  | 0.2 | 0.3 | 0.4 | 
| 4.5  | 0.2 | 0.3 | 0.4 |
| 4.6  | 0.2 | 0.3 | 0.4 | 
| 4.7  | 0.2 | 0.3 | 0.4 | 
| 4.8  | 0.2 | 0.3 | 0.4 | 
| 4.9  | 0.2 | 0.3 | 0.4 |
| 5.0  | 0.2 | 0.3 | 0.4 | 
| 5.1  | 0.2 | 0.3 | 0.4 | 
| 5.2  | 0.2 | 0.3 | 0.4 | 
| 5.3  | 0.2 | 0.3 | 0.4 |
| 5.4  | 0.2 | 0.3 | 0.4 | 
| 5.5  | 0.2 | 0.3 | 0.4 | 
| 5.6  | 0.2 | 0.3 | 0.4 | 
| 5.7  | 0.2 | 0.3 | 0.4 |
| 5.8  | 0.2 | 0.3 | 0.4 | 
| 5.9  | 0.2 | 0.3 | 0.4 | 
| 6.0  | 0.2 | 0.3 | 0.4 | 
| 6.1  | 0.2 | 0.3 | 0.4 |
| 6.2  | 0.2 | 0.3 | 0.4 | 
| 6.3  | 0.2 | 0.3 | 0.4 | 
| 6.4  | 0.2 | 0.3 | 0.4 | 
| 6.5  | 0.2 | 0.3 | 0.4 |
| 6.7  | 0.2 | 0.3 | 0.4 | 
| 6.8  | 0.2 | 0.3 | 0.4 | 
| 6.9  | 0.2 | 0.3 | 0.4 | 
| 7.0  | 0.2 | 0.3 | 0.4 |
| 7.1  | 0.2 | 0.3 | 0.4 | 
| 7.2  | 0.2 | 0.3 | 0.4 | 
| 7.3  | 0.2 | 0.3 | 0.4 | 
| 7.4  | 0.2 | 0.3 | 0.4 |
| 7.5  | 0.2 | 0.3 | 0.4 | 
| 7.6  | 0.2 | 0.3 | 0.4 | 
| 7.7  | 0.2 | 0.3 | 0.4 | 
| 7.8  | 0.2 | 0.3 | 0.4 |
| 7.9  | 0.2 | 0.3 | 0.4 | 
| 8.0  | 0.2 | 0.3 | 0.4 | 
| 8.1  | 0.2 | 0.3 | 0.4 | 
| 8.2  | 0.2 | 0.3 | 0.4 |
| 8.3  | 0.2 | 0.3 | 0.4 | 
| 8.4  | 0.2 | 0.3 | 0.4 | 
| 8.5  | 0.2 | 0.3 | 0.4 | 
| 8.6  | 0.2 | 0.3 | 0.4 |
| 8.7  | 0.2 | 0.3 | 0.4 | 
| 8.8  | 0.2 | 0.3 | 0.4 | 
| 8.9  | 0.2 | 0.3 | 0.4 | 
| 9.0  | 0.2 | 0.3 | 0.4 |
| 9.1  | 0.2 | 0.3 | 0.4 | 
| 9.2  | 0.2 | 0.3 | 0.4 | 
| 9.3  | 0.2 | 0.3 | 0.4 | 
| 9.4  | 0.2 | 0.3 | 0.4 |
| 9.5  | 0.2 | 0.3 | 0.4 | 
| 9.6  | 0.2 | 0.3 | 0.4 | 
| 9.7  | 0.2 | 0.3 | 0.4 | 
| 9.8  | 0.2 | 0.3 | 0.4 |
| 9.9  | 0.2 | 0.3 | 0.4 | 
| 10.0  | 0.2 | 0.3 | 0.4 | 




























| undeformed jello  | deformed jello |

| ------------- | ------------- |

| ![](images/undeformed3.png?raw=true)  | ![](images/deformed3.png?raw=true) |



