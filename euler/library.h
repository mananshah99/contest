#pragma once
#include "template.cpp"

class library
{
	public:
		static vector<ll> sieve(ull&);
		static int ctoi(char, bool);
		static bool isPalindrome(string);
		static ll parseLong(string);
		static char* toCharArray(string);
		static ll* llArray(int);
		static void getll(ll*);
		static void printV(vector<int>);
		static ll nFactors(ll);
		static ll sFactors(ll);
};

