/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Copyright <c> 2012 Sifteo, Inc. All rights reserved.
 */

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef SIFTEO_BUDDIES_PIECE_H_
#define SIFTEO_BUDDIES_PIECE_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

namespace Buddies {

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

struct Piece
{
    enum Attribute
    {
        ATTRIBUTE_NORMAL = 0,
        ATTRIBUTE_FIXED,
        ATTRIBUTE_HIDDEN,
        
        NUM_ATTRIBUTES
    };
    
    Piece(
        int buddy = 0,
        int part = 0,
        Attribute attribute = ATTRIBUTE_NORMAL,
        bool must_solve = true)
        : mBuddy(buddy)
        , mPart(part)
        , mAttribute(attribute)
        , mMustSolve(must_solve)
    {
    }
    
    int mBuddy;
    int mPart;
    Attribute mAttribute;
    bool mMustSolve;
};

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

}

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif

///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////
