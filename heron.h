#ifndef HERON_H
#define HERON_H


class Heron
{
public:
    Heron();
    int id;
    LinkOut mLinksOut[];
    LinkIn mLinksIn[];
    unsigned float mNext, mRealy;

};

class LinkIn{
public:
    LinkIn(Heron *sender, float weight, float lastWeight/*, Link *nextLink*/);
    Heron *mReciver = nullptr;
    float mWeight =0;
    float mLastWeight = 0;
    /*Link mNextLink = nullptr;*/
};
class LinkOut{

public:
    LinkOut(Heron *receiver);
    Heron *mReciver = nullptr;
};


#endif // HERON_H

