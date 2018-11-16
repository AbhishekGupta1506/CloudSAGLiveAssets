OAuthRedirectionEndpoint Package

The OAuthRedirectionEndpoint package contains a webMethods Integration Server implementation of an OAuth 2.0 client application's redirection endpoint. The endpoint can be used in an OAuth authorization code grant. Both confidential and public clients can use this endpoint. Public clients typically reside entirely on the resource owner's device, so it is more common for confidential clients to use a server-based redirection endpoint such as this one.

For details about OAuth 2.0, see https://tools.ietf.org/html/rfc6749.



Preconditions

Prior to using this redirection endpoint, you must do the following.

1. Install the OAuthRedirectionEndpoint package on an Integration Server.

2. Register your client application with the OAuth authorization server. You will need to tell the authorization server the URI of the client's redirection endpoint. That will be https://YOUR_HOST:YOUR_PORT/invoke/oauth/tokenForAuthCode. If using Integration Server as the authorization server, associate the scopes you will be using with the client.

3. Invoke the oauth.client:saveClientInfo service in the OAuthRedirectionEndpoint package and provide values for the following input parameters.
   . clientInfo/client_id      - the client_id assigned to your client application by the authorization server
   . clientInfo/client_secret  - the client_secret assigned to your client application by the authorization server; required if client_type is "confidential"
   . clientInfo/client_type    - either "confidential" or "public"
   . clientInfo/redirect_uri   - the URI of this redirection endpoint; required if you have registered more than one redirection endpoint for your client on the authorization server
   . clientInfo/token_endpoint - the URI of the authorization server's token endpoint
 

 
Use

If you have install the OAuthRedirectionEndpoint package and registered your client application on an authorization server, you may issue a request from your browser to the authorization endpoint as described in https://tools.ietf.org/html/rfc6749#section-4.1.1. Note that some authorization servers may require additional input parameters beyond those defined in RFC 6749. The authorization endpoint will return a form to the browser that prompts the resource owner to approve or deny the authorization. If approved, the authorization server should redirect the browser to the token endpoint, the oauth:tokenForAuthCode service.



Package Contents

   . oauth:tokenForAuthCode service - the redirection endpoint
   . oauth:tokenData                - document type that defines the output of oauth:tokenForAuthCode
   . oauth:client:saveClientInfo    - service you must invoke to save your client information prior to using oauth:tokenForAuthCode
   . oauth:client:getClientInfo     - service used by oauth:tokenForAuthCode when building the token request
   . oauth:client:clientInfo        - document type that defines the client information you must supply to oauth:client:saveClientInfo
   . oauth.helpers:buildAuthHdr     - service used by oauth:tokenForAuthCode when building the token request
   . oauth.helpers:buildRequestData - service used by oauth:tokenForAuthCode when building the token request
   . oauth.helpers:clientAuthHdr    - document type that defines the Authorization header used when building the token request
