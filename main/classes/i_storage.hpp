#pragma once

class i_storage{
    public:
        virtual void load() = 0;
        virtual void save() = 0;
};