// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as React from "react";
import * as GlobalStyle from "../helpers/GlobalStyle.bs.js";
import * as ReactNative from "react-native";

function AuthLoadingScreen(Props) {
  var navigation = Props.navigation;
  var _bootstrapAsync = function (param) {
    return ReactNative.AsyncStorage.getItem("userToken").then((function (stringOrNull) {
                  console.log("CHECKING_AUTH_TOKEN", stringOrNull);
                  if (stringOrNull !== null) {
                    return Promise.resolve((navigation.navigate("App"), /* () */0));
                  } else {
                    return Promise.resolve((navigation.navigate("Auth"), /* () */0));
                  }
                }));
  };
  React.useEffect((function () {
          _bootstrapAsync(/* () */0);
          return ;
        }));
  return React.createElement(ReactNative.View, {
              style: GlobalStyle.styles.container,
              children: null
            }, React.createElement(ReactNative.ActivityIndicator, { }), React.createElement(ReactNative.StatusBar, {
                  barStyle: "default"
                }));
}

var make = AuthLoadingScreen;

export {
  make ,
  
}
/* react Not a pure module */