/*
 * Word.h
 *
 *  Created on: 23 Oct 2015
 *      Author: hieu
 */

#pragma once

#include "../Word.h"

namespace Moses2
{
namespace SCFG
{

class Word : public Moses2::Word
{
	  friend std::ostream& operator<<(std::ostream &, const Word &);
public:
	  bool isNonTerminal;

	  void CreateFromString(FactorCollection &vocab, const System &system, const std::string &str, bool doubleNT);

protected:
};

}
}

