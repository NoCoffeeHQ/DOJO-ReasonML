let component = ReasonReact.statelessComponent("Home");

let make = (children) => {
  ...component, render: (_self) => {
    <div>
      <h1>{ReasonReact.string("Hello world")}</h1>
      {ReasonReact.array(children)}
    </div>
  }
};
