---
layout: page
---

![Blueprint banner]({{ site.baseurl }}/static/img/banner.jpg)

Arduino track content from [Blueprint 2020](https://blueprint.hackmit.org/).

## Lectures

### Workshop 1: 10-11:30am

<ol class="double-spaced">
  {% assign lectures = site.lectures | sort: 'number' %}
  {% for lecture in lectures %}
  {% if lecture.workshop == 1 %}
  <li>
    <a href="{{ site.baseurl }}{{ lecture.url }}">{{ lecture.title }}</a>
    {% if lecture.details %}
    <em><small>({{ lecture.details }})</small></em>
    {% endif %}
  </li>
  {% endif %}
  {% endfor %}
</ol>

### Workshop 2: 1-2pm

<ol class="double-spaced">
  {% assign lectures = site.lectures | sort: 'number' %}
  {% for lecture in lectures %}
  {% if lecture.workshop == 2 %}
  <li>
    <a href="{{ site.baseurl }}{{ lecture.url }}">{{ lecture.title }}</a>
    {% if lecture.details %}
    <em><small>({{ lecture.details }})</small></em>
    {% endif %}
  </li>
  {% endif %}
  {% endfor %}
</ol>

### Workshop 3: 2:15-3:15pm

<ol class="double-spaced">
  {% assign lectures = site.lectures | sort: 'number' %}
  {% for lecture in lectures %}
  {% if lecture.workshop == 3 %}
  <li>
    <a href="{{ site.baseurl }}{{ lecture.url }}">{{ lecture.title }}</a>
    {% if lecture.details %}
    <em><small>({{ lecture.details }})</small></em>
    {% endif %}
  </li>
  {% endif %}
  {% endfor %}
</ol>

### Worshop 4: 4-5pm

<ol class="double-spaced">
  {% assign lectures = site.lectures | sort: 'number' %}
  {% for lecture in lectures %}
  {% if lecture.workshop == 4 %}
  <li>
    <a href="{{ site.baseurl }}{{ lecture.url }}">{{ lecture.title }}</a>
    {% if lecture.details %}
    <em><small>({{ lecture.details }})</small></em>
    {% endif %}
  </li>
  {% endif %}
  {% endfor %}
</ol>
