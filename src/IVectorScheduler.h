#ifndef HPGC_INTERFACE_SCHEDULER_H_INCLUDE

#define HPGC_INTERFACE_SCHEDULER_H_INCLUDE 

#include "IRole.h"
#include "IV2VAlgorithm.h"
#include "VectorCellar.h"

#include <list>

namespace hpgc{

	class IVectorScheduler
	{
	public:
		virtual void Work(IV2VAlgorithm * task) = 0;	
		virtual void SetRole(IRole * role) = 0;
		virtual void SetCellar(VectorCellar * cellar) = 0;
	};

}

#endif 
