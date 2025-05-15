import React, { Component } from "react";
class Statemgtclass extends Component {
  state = { number: 0 };
  increment = () => {
    const value = this.state.number + 1;
    this.setState({ number: value });
  };
  decrement = () => {
    if (this.state.number > 0) {
    }
    const value = this.state.number - 1;
    this.setState({ number: value });
  };
  reset = () => {
    this.setState({ number: 0 });
  };
  double = () => {
    const value = this.state.number * 2;
    this.setState({ number: value });
  };
  render() {
    return (
      <div>
        <h1>Number</h1>
        <h1>{this.state.number}</h1>
        <br />
        <button onClick={this.increment}>Increment</button>
        <button onClick={this.decrement}>Decrement</button>
        <button onClick={this.double}>Double</button>
        <button onClick={this.reset}>Reset</button>
      </div>
    );
  }
}
export default Statemgtclass;
