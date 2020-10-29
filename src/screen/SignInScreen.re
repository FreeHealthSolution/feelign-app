open ReactNative;
open ReactNavigation;

let styles =
  Style.(
    StyleSheet.create({
      "title": style(
        ~fontSize=25.,
        ~marginBottom=5.->dp,
        ~textAlign=`center,
        ()
      ),
      "container": viewStyle(
          ~justifyContent=`spaceBetween,
          ~flex=1.,
          ~backgroundColor=("#fafafa"),
          ~paddingHorizontal=10.->dp,
          ~paddingVertical=15.->dp,
          ()
        ),
      "input": style(
        ~fontSize=22.,
        ~marginBottom=5.->dp,
        ~color=("#333333"),
        ~borderWidth=1.,
        ~borderColor=("#333333"),
        ~borderStyle=`solid,
        ~padding=5.->dp,
        ()
      ),
    })
  );

// TODO: use ref to focus in outer input
[@react.component]
let make = (~navigation: Navigation.t) => {
  let (fullName, setName) = React.useState(() => "");
  let (email, setEmail) = React.useState(() => "");
  let (password, setPassword) = React.useState(() => "");

  let sigin = () => {
      Js.Promise.
      (
          AsyncStorage.setItem("userToken", "abc")
          |> then_(_result =>resolve(navigation->Navigation.navigate("App")))
      );
  };
  <View style=styles##container>
      <Text style=styles##title>"Cadastro"->React.string</Text>
      <TextInput
        value=fullName
        onChangeText={value => setName(_ => value)}
        placeholder="Fullname"
        style=styles##input
        placeholderTextColor={"#666666"}
        returnKeyType=`next
       />
      <TextInput
        value=email
        onChangeText={value => setEmail(_ => value)}
        placeholder="email"
        autoCapitalize=`none
        keyboardType=`emailAddress
        style=styles##input
        placeholderTextColor={"#666666"}
        returnKeyType=`next
       />
      <TextInput
        value=password
        onChangeText={value => setPassword(_ => value)}
        placeholder="password"
        autoCapitalize=`none
        secureTextEntry=true
        style=styles##input
        placeholderTextColor={"#666666"}
       />
      <Button
        title="Cadastrar"
        onPress={_ => sigin() |> ignore}
        color="#424bb2"
      />
  </View>;
};

make->NavigationOptions.setNavigationOptions(
    NavigationOptions.t(~title="Please sign in", ()),
);