#ifndef _RPGRANDOM_H_
#define _RPGRANDOM_H_

#include <random>
#include <ctime>

//functional blueprint
class RPGrandom
{
private:
	std::mt19937 mt;
public:
	RPGrandom();

	void init();
	void init(unsigned int seed);

	unsigned int nextInt();

	double nextDouble();

	~RPGrandom();
};

#endif