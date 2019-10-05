namespace hyped {

namespace data {
enum State {
    Idle,
    Ready,
    Accelerating,
    Decelerating,
    Emergency,
    Stopped,
    Complete,
    FailureComplete
};
}}