//
// Created by idalov on 12.05.18.
//

#include <StepAction.hh>
#include <G4RunManager.hh>

StepAction::StepAction(EventAction *_event) : event(_event) {}

void StepAction::UserSteppingAction(const G4Step *step) {

}
//void StepAction::SetpName(G4String newValue)
//{
//
//
//}
