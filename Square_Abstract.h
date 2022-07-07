//
// Created by Su on 2022/7/6.
//

#ifndef UMLWORKSHOP_SQUARE_ABSTRACT_H
#define UMLWORKSHOP_SQUARE_ABSTRACT_H

/**
 * @param position:the position that the square resides
 *
 */


class Square_Abstract{
private:
    int Position;
public:
    explicit Square_Abstract(int position);
    int GetPosition() const;
    virtual void Operation()=0;
};


#endif //UMLWORKSHOP_SQUARE_ABSTRACT_H
