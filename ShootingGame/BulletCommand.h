#pragma once

class BulletCommand 
{
public:
    virtual ~BulletCommand() {}
    virtual void execute() = 0;
};

class BasicBulletCommand : public BulletCommand 
{
public:
    void execute() override 
    {
        
       
    }
};

class DoubleBulletCommand : public BulletCommand
{
public:
    void execute() override
    {


    }
};
