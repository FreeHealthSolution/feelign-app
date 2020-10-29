// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as ReactNative from "react-native";

var styles = ReactNative.StyleSheet.create({
      title: {
        fontSize: 25,
        textAlign: "center",
        marginBottom: 5
      },
      container: {
        backgroundColor: "#fafafa",
        flex: 1,
        justifyContent: "space-between",
        paddingHorizontal: 10,
        paddingVertical: 15
      },
      input: {
        color: "#333333",
        fontSize: 22,
        borderColor: "#333333",
        borderStyle: "solid",
        borderWidth: 1,
        marginBottom: 5,
        padding: 5
      }
    });

function SignInScreen(Props) {
  var navigation = Props.navigation;
  var match = React.useState((function () {
          return "";
        }));
  var setName = match[1];
  var match$1 = React.useState((function () {
          return "";
        }));
  var setEmail = match$1[1];
  var match$2 = React.useState((function () {
          return "";
        }));
  var setPassword = match$2[1];
  var sigin = function (param) {
    return ReactNative.AsyncStorage.setItem("userToken", "abc").then((function (_result) {
                  return Promise.resolve((navigation.navigate("App"), /* () */0));
                }));
  };
  return React.createElement(ReactNative.View, {
              style: styles.container,
              children: null
            }, React.createElement(ReactNative.Text, {
                  style: styles.title,
                  children: "Cadastro"
                }), React.createElement(ReactNative.TextInput, {
                  onChangeText: (function (value) {
                      return Curry._1(setName, (function (param) {
                                    return value;
                                  }));
                    }),
                  placeholder: "Fullname",
                  placeholderTextColor: "#666666",
                  returnKeyType: "next",
                  value: match[0],
                  style: styles.input
                }), React.createElement(ReactNative.TextInput, {
                  autoCapitalize: "none",
                  keyboardType: "email-address",
                  onChangeText: (function (value) {
                      return Curry._1(setEmail, (function (param) {
                                    return value;
                                  }));
                    }),
                  placeholder: "email",
                  placeholderTextColor: "#666666",
                  returnKeyType: "next",
                  value: match$1[0],
                  style: styles.input
                }), React.createElement(ReactNative.TextInput, {
                  autoCapitalize: "none",
                  onChangeText: (function (value) {
                      return Curry._1(setPassword, (function (param) {
                                    return value;
                                  }));
                    }),
                  placeholder: "password",
                  placeholderTextColor: "#666666",
                  secureTextEntry: true,
                  value: match$2[0],
                  style: styles.input
                }), React.createElement(ReactNative.Button, {
                  color: "#424bb2",
                  onPress: (function (param) {
                      sigin(/* () */0);
                      return /* () */0;
                    }),
                  title: "Cadastrar"
                }));
}

SignInScreen.navigationOptions = {
  title: "Please sign in"
};

var make = SignInScreen;

export {
  styles ,
  make ,
  
}
/* styles Not a pure module */
