#include "utils/system.hpp"
#include "utils/concurrent/thread.hpp"
#include "data/data.hpp"
#include "utils/config.hpp"
// add #includes

using hyped::data::Data;
using hyped::data::StateMachine;
using hyped::data::State;
using hyped::utils::System;
// add namespaces

int main(int argc, char* argv[])
{
  hyped::utils::System::parseArgs(argc, argv);  // MUST HAVE THIS LINE IN EACH MAIN
  // TODO(anyone): create logger here

  // static function that gets data from central data struct
  Data& data_ = Data::getInstance();

  // static function that gets the system, needed for exercises 2 and 3
  System& sys = System::getSystem();

  // TODO(anyone): create BmsManager instance and start thread

  // sets state machine to kAccelerating, needed for exercise 2
  StateMachine state_machine = data_.getStateMachineData();
  state_machine.current_state = State::kAccelerating;
  data_.setStateMachineData(state_machine);

  // TODO(anyone): read from central data struct and log data in different debug levels

 	return 0;
}