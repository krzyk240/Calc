#ifndef __Var_base_hpp
#define __Var_base_hpp

#include "../Numeric-lib/num.hpp"
#include <vector>
#include <queue>
#include <string>
#include <stack>

using namespace std;

namespace var_base
{
	struct ver
	{
		int t[256];
		num w;
		bool is;
		ver();
		~ver(){};
	};
	extern vector<ver> _v;
	extern queue<int> _free;
	extern bool is_there;
	void swap_var(const string&, num&);
	inline void add_var(const string& _str, num _n)
	{swap_var(_str, _n);}
	bool remove_var(string);
	bool read_var(const string&, num&);
}

#endif // __Var_base_hpp
