/**
 * @file client.cc
 * Test the pattern.
 * @author Ken Hu
 */

#include "WebsiteModule.h"
#include "ModuleImp.h"
#include "Navigation.h"
#include "Body.h"
#include "DarkTheme.h"
#include "LightTheme.h"

int main()
{
    DarkTheme darkTheme;
    ModuleImp* imp = &darkTheme;
    WebsiteModule* nav = new Navigation(imp);
    nav->setTheme();

    LightTheme lightTheme;
    imp = &lightTheme;
    nav->setTheme();

    WebsiteModule* body = new Body(imp);
    body->setTheme();

    delete body;
    delete nav;
}

