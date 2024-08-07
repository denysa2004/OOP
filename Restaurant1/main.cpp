#include <iostream>
#include <memory>

#include "UI/UI.h"

int main() {

    unique_ptr<Repository> repo(new Repository());
    unique_ptr<Controller> ctr(new Controller(repo.get()));
    UI ui(ctr.get());
    ui.displayOptions();
    ui.processUserChoice(ui.getUserChoice());
    return 0;
}
