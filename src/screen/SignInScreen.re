open ReactNative;
open ReactNavigation;

let styles =
  Style.(
    StyleSheet.create({
      "title": style(~fontSize=25., ~marginBottom=5.->dp, ()),
      "subtitle": style(~fontSize=22., ~marginBottom=5.->dp, ()),
      "container": viewStyle(
          ~justifyContent=`spaceBetween,
          ~alignItems=`center,
          ~flex=1.,
          ~backgroundColor=("#333333"),
          ()
        )
    })
  );


[@react.component]
let make = (~navigation: Navigation.t) => {
    
  let _signInAsync = () => {
      Js.Promise.
      (
          AsyncStorage.setItem("userToken", "abc")
          |> then_(_result =>
              resolve(navigation->Navigation.navigate("App"))
              )
      );
  };
  <View style=styles##container>
      <Text style=styles##title>"Cadastro"->React.string</Text>
      <TextInput
        value=todoItem
        onChange=setTodoItem
      />
      <Text style=styles##subtitle>"Cadastrar meus dados"->React.string</Text>
      <Button title="Cadastrar" onPress={_ => _signInAsync() |> ignore} />
  </View>;
};

make->NavigationOptions.setNavigationOptions(
    NavigationOptions.t(~title="Please sign in", ()),
);