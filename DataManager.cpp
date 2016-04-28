//
//  DataManager.cpp
//  Review
//
//  Created by a on 16/3/28.
//
//

#include "DataManager.h"

DECLARE_SINGLETON_MEMBER(DataManager);
static DataManager* _instance=nullptr;

void DataManager::test()
{
    log("HelloSIngelton");
}