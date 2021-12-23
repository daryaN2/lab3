#include <iostream>
#include "WorkflowExecutor.h"
#include "OpenFile.h"
#include "Dump.h"
#include "Grep.h"

int main() {

    std::string fileName;
    std::cin >> fileName;
    std::ifstream in(fileName);
    if(!in) {
        throw OpenFile("Cannot open file");
    }
    //static BlockMaker <Dump> dump("dump");
    //static BlockMaker <Grep> maker("grep");

    WorkflowExecutor flow;
    flow.executeWorkflow(in);

    return 0;
}
