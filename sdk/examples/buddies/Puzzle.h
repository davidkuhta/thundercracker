/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Copyright <c> 2012 Sifteo, Inc. All rights reserved.
 */
 
////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef BUDDIES_PUZZLE_H_
#define BUDDIES_PUZZLE_H_

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <sifteo/cube.h>
#include "BuddyId.h"
#include "Config.h"
#include "Piece.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

namespace Buddies {

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

class Puzzle
{
public:
    Puzzle();

    Puzzle(
        unsigned int book,
        const char *title,
        const char cutsceneTextStart[][32], unsigned int numCutsceneTextStart,
        const char cutsceneTextEnd[][32], unsigned int numCutsceneTextEnd,
        const char *clue,
        const BuddyId buddies[], unsigned int numBuddies,
        unsigned int numShuffles,
        const Piece piecesStart[kMaxBuddies][NUM_SIDES],
        const Piece piecesEnd[kMaxBuddies][NUM_SIDES]);
    
    void Reset();
    
    unsigned int GetBook() const;
    void SetBook(unsigned int book);
    
    const char *GetTitle() const;
    void SetTitle(const char *title);
    
    const char *GetClue() const;
    void SetClue(const char *clue);
    
    void AddCutsceneTextStart(const char *cutsceneTextStart);
    const char *GetCutsceneTextStart(unsigned int cutsceneIndex) const;
    unsigned int GetNumCutsceneTextStart() const;
    
    void AddCutsceneTextEnd(const char *cutsceneTextEnd);
    const char *GetCutsceneTextEnd(unsigned int cutsceneIndex) const;
    unsigned int GetNumCutsceneTextEnd() const;
    
    unsigned int GetNumShuffles() const;
    void SetNumShuffles(unsigned int numSuhffles);
    
    void AddBuddy(BuddyId buddyId);
    BuddyId GetBuddy(unsigned int buddyIndex) const;
    unsigned int GetNumBuddies() const;
    
    const Piece &GetPieceStart(unsigned int buddy, Sifteo::Cube::Side side) const;
    void SetPieceStart(unsigned int buddy, Sifteo::Cube::Side side, const Piece &piece);
    
    const Piece &GetPieceEnd(unsigned int buddy, Sifteo::Cube::Side side) const;
    void SetPieceEnd(unsigned int buddy, Sifteo::Cube::Side side, const Piece &piece);
    
private:
    unsigned char mBook : 4;
    const char *mTitle;
    const char *mClue;
    const char *mCutsceneTextStart[8];
    const char *mCutsceneTextEnd[8];
    unsigned char mBuddies[kMaxBuddies];
    unsigned char mNumCutsceneTextStart : 3;
    unsigned char mNumCutsceneTextEnd : 3;
    unsigned char mNumShuffles : 8;
    unsigned char mNumBuddies : 5;
    Piece mPiecesStart[kMaxBuddies][NUM_SIDES];
    Piece mPiecesEnd[kMaxBuddies][NUM_SIDES];    
};

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#endif

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////
