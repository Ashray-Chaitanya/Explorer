import React from "react";
import { useState } from "react";
const Statemgt = () => {
  const [number, setNumber] = useState(0);
  const incrememt = () => {
    setNumber(number + 1);
  };
  const decrememt = () => {
    if (number > 0) setNumber(number - 1);
  };
  const reset = () => {
    setNumber(0);
  };
  const double = () => {
    setNumber(number * 2);
  };
  return (
    <div>
      <h1>number</h1>
      <h1>{number}</h1>
      <br></br>
      <button onClick={incrememt}>increment</button>
      <button onClick={decrememt}>decrement</button>
      <button onClick={double}>double</button>
      <button onClick={reset}>reset</button>
    </div>
  );
};
export default Statemgt;
