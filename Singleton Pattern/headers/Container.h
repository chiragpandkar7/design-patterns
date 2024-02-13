#ifndef CONTAINER_H
#define CONTAINER_H

class Container
{
    public:
        static Container* getContainer();
        void setValue(int x, int y);
        int addition();
        
    private:
        Container();
        Container(Container& ref) = delete;
        Container operator=(Container& ref) = delete;
        static Container* mContainer;
        int A;
        float B;
};

#endif