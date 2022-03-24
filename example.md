### manifest.json

```JSON
{
  "short_name": "Weather",
  "name": "Weather: Do I need an umbrella?",
  "icons": [
    {
      "src": "/images/icons-vector.svg",
      "type": "image/svg+xml",
      "sizes": "512x512"
    },
    {
      "src": "/images/icons-192.png",
      "type": "image/png",
      "sizes": "192x192"
    }
  ],
  "prefer_related_applications": true,
  "start_url": "/?source=pwa",
  "background_color": "#3367D6",
  "display": "standalone",
  "scope": "/",
  "theme_color": "#3367D6"
}
```

#### name, short_name(필수)

* **name**
  * 웹을 설치하게 되면 `icon`에 표시되는 이름입니다.
* **short_name**
  * 사용자의 홈 화면이나 `name`을 보여주기에는 제한적인 장소에서 표시되는 이름입니다.
