open ReactNative;
open ReactNavigation;
open GlobalStyle;

let routes = {
  "SignIn": SignInScreen.make
};

let navigator =
  StackNavigator.(
    makeWithConfig(routes, config(~mode=`modal, ~headerMode=`none, ()))
  );

navigator->NavigationOptions.setNavigationOptions(
  NavigationOptions.t(~tabBarVisible=false, ()),
);