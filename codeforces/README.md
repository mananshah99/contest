
# Codeforces Solutions
## Format
Codeforces solution files can be found at ```/codeforces/[Problem Number][Problem Letter].cpp```. 

For example, the solution to Codeforces problem 1A contains the method
```cpp
int main()
{
	ll n, m, a;

	std::cin >> n;
	std::cin >> m;
	std::cin >> a;

	ll T1 = n / a;  
	ll T2 = m / a;  

	if (n%a != 0) T1++;   
	if (m%a != 0) T2++;  

	ll f = T1*T2;
	std::cout << f;
	return 0;
}
```
which solves the problem in the given time limit.

## Headers
Each solution also contains a header file, including 
* the name of the problem
* the language the code was submitted in
* the status of the submission
* how long the code took to complete
* how many KB of memory were allocated

For example, the solution in problem 1A contains the following header: 
```cpp
/*
Submission Details:

mananshah	 
1A - Theatre Square	 
GNU C++	

Accepted	 
30 ms	 
0 KB
*/
```
