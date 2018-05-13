#ifndef __BADPROG_CONTEXT_H__
#define __BADPROG_CONTEXT_H__

// Badprog.com

//#include <memory>
#include "IStrategy.h"

class Context {
public:
	Context();
	~Context();

	void setStrategy(const std::shared_ptr<IStrategy> &strategy, IStrategy::ENUM_ACCOUNT account);
	void dealWithStrategy();

private:
	IStrategy::ENUM_ACCOUNT _account;
	std::shared_ptr<IStrategy> _strategy;
};

#endif // __BADPROG_CONTEXT_H__