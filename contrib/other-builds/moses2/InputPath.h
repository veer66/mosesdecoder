/*
 * InputPath.h
 *
 *  Created on: 23 Oct 2015
 *      Author: hieu
 */

#ifndef INPUTPATH_H_
#define INPUTPATH_H_
#include <vector>
#include "Phrase.h"
#include "moses/WordsRange.h"

class TargetPhrases;

class InputPath {
public:
	InputPath(const SubPhrase &subPhrase, const Moses::WordsRange &range, size_t numPt);
	virtual ~InputPath();

	const SubPhrase &GetSubPhrase() const
	{ return m_subPhrase; }

protected:
	SubPhrase m_subPhrase;
	Moses::WordsRange m_range;
	std::vector<const TargetPhrases*> m_targetPhrases;
};

#endif /* INPUTPATH_H_ */
