#include <iostream>
#include <string>
#include <random>

using namespace  std;

string randDNA(int seed, string bases, int n)
{
			string DNA = "";
			int i;
			
			if (bases.size() < 1)
			{
				return "";
			}
			
			mt19937 eng1(seed);
			
			int min = 0;
			int max = bases.size() - 1;
			
			uniform_int_distribution<>unifrm(min, max);
			
			for (i=0; i < n; i++)
			{
				int rIndex = unifrm(eng1);
				DNA+= bases[rIndex];
			}
			
			return DNA;
}
