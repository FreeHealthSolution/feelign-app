open ReactNavigation;

module AuthFlowAppContainer =
  AppContainer.Make({
    type screenProps = {. "someProp": int};

    let navigator =
      SwitchNavigator.makeWithConfig(
        {
          "App": AppStack.navigator,
          "Auth": AuthStack.navigator,
          "AuthLoading": AuthLoadingScreen.make,
        },
        SwitchNavigator.config(~initialRouteName="AuthLoading", ()),
      );
  });

[@react.component]
let make = () => {
  let screenProps = {"someProp": 42};
  <AuthFlowAppContainer screenProps />;
};